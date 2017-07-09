n = int(raw_input())
summ = 0
first_numbers = []
second_numbers = []
last_hit = False
for i in range(n):
    number = int(raw_input())
    summ += number
    last_hit = number > 0
    if last_hit:
        first_numbers.append(number)
    else:
        second_numbers.append(abs(number))
if summ > 0 or (summ == 0 and first_numbers > second_numbers) or (summ == 0 and first_numbers == second_numbers and last_hit):
    print "first"
else:
    print "second"