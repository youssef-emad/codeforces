n,m = map(int, raw_input().split())
values = map(int, raw_input().split())
summ = 0
count = 0
values.sort()
for value in values:
    if value < 0 and count < m:
        summ += value
        count += 1
    else:
        break
print abs(summ)