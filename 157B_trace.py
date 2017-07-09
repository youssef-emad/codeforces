pi = 3.1415926536
n = int(raw_input())
values = map(int, raw_input().split())
values.sort()
blue_area = 0
red_area = 0
for i in range(n):
    if i%2 == 0:
        red_area += pi * (values[i]) * (values[i])
    else:
        blue_area += pi * (values[i]) * (values[i])
print abs(red_area - blue_area)