def print_output(output, n):
    for i in range(n):
        print output[i][0], output[i][1]
n = int(raw_input())
values =  map(int , raw_input().split())
indeces = range(1,n+1)
output = []
fail = False
if values[0] == 0:
    fail = True
else:
    greatest_indeces = sorted(range(1,n), key=lambda k: values[k])
    for i in range(0,min(n - 1,values[0])):
        output.append((1, greatest_indeces[n - i - 2] + 1))
    flag = 0
    count = values[0]
    while count < n - 1:
        index = greatest_indeces[n - flag - 2]
        if values[index] == 0:
            fail = True
            break
        chosen = greatest_indeces[:n - count - 1]
        for i in range(0, min(n,values[index])):
            output.append((index + 1, chosen[n - count - i - 2] + 1))
        count += values[index]
        flag += 1
if fail:
    print -1
else:
    print len(output)
    print_output(output, len(output))