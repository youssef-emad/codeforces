days,total_hours  = map(int ,raw_input().split())
maximum_hours = [0] * days
output = [0] * days
summax = 0
summin = 0
for i in range(days):
    output[i], maximum_hours[i] = map(int ,raw_input().split())
    summax += maximum_hours[i]
    summin += output[i]
if total_hours > summax or total_hours < summin:
    print "NO"
else:
    remaining_time = total_hours - summin
    print "YES"
    for i in range(days):
        if summin == total_hours:
            break;
        elif summin - output[i] + maximum_hours[i] <= total_hours:
            summin = summin - output[i] + maximum_hours[i]
            output[i] = maximum_hours[i]
        elif summin - output[i] + maximum_hours[i] > total_hours:
            output[i] += total_hours - summin
            summin = total_hours

    for hour in output:
    	print hour,