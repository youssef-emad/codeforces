n, f = map(int, raw_input().split())
products = [0] * n
customers = [0] * n
difference = [0] * n
difference_after = [0] * n
gain = [0] * n
output = 0
for i in range(n):
    products[i], customers[i] = map(int, raw_input().split())
    difference[i] = max(0, customers[i] - products[i])
    difference_after[i] = max(0, customers[i] - 2 * products[i])
    gain[i] = difference[i] - difference_after[i]
    
greatest_gain_indeces = sorted(range(n), key=lambda k: gain[k])

for i in range(n):
    if f <= 0:
        break
    index = greatest_gain_indeces[n - 1 - i]
    if products[index] ==  0:
        continue
    else:
        products[index] = 2 * products[index]
        f = f - 1
for i in range(n):
    if customers[i] == 0 or products[i] == 0:
        continue
    elif customers[i] >= products[i]:
        output += products[i]
    else:
        output += customers[i]
print output