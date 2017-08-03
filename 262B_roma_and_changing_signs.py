n, k = map(int, raw_input().split())
values = map(int, raw_input().split())
count = 0
positive_index = 0
negative = False
if k <= n:
    while(count < k):
        if values[count] > 0:
            positive_index = count
            break
        else:
            negative = True
            values[count] *= -1
        count += 1
    if count != k:
        if negative and values[positive_index - 1] < values[positive_index]:
            values[positive_index - 1] *= int(pow(-1, k - count))
        else:
            values[positive_index] *= int(pow(-1, k - count))
    print sum(values)
else:
    output = 0
    swaps = 0
    for i in range(n):
        if values[i] < 0:
            swaps += 1
            values[i] = abs(values[i])
        output += values[i]
    minimum = min(values)
    output = output - minimum + minimum * pow(-1, k - swaps)
    print output