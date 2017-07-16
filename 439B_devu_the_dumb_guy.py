n, x = map(int, raw_input().split())
values = map(int, raw_input().split())
values.sort()
output = 0
for i in range(n):
    x = max(1,x)
    output += values[i] * x
    x -= 1
print output