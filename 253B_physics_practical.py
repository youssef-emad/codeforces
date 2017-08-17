def count_elements(value, count):
    array = count[value: 2 * value + 1]
    count2 = 0
    for item in array:
        if item != 0:
            count2 += item
    return count2
lines = tuple(open('input.txt', 'r'))
output = open('output.txt','w')
n = int(lines[0])
values = map(int, lines[1].split())
count = [0] * (5001)
sum_array = [0] * (50001)
max_present = 0
index = 0
for value in values:
    count[value] += 1
for i in range(1, 5001):
    sum_array[i] = sum_array[i - 1] + count[i]
for i in range(1, 2501):
    current_present = sum_array[2 * i] - sum_array[i - 1]
    if(current_present > max_present):
        max_present = current_present
output.write('%d' % (n - max_present))
