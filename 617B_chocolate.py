n = int(raw_input())
values = map(int, raw_input().split())
ones = []
difference = []
output = 0
for i in range(n):
    if values[i] == 1:
        output = 1
        ones.append(i)
for i in range(len(ones) - 1):
    difference.append(ones[i + 1] - ones[i] - 1)
for diff in difference:
    output *= (diff + 1)
print output