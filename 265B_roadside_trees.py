n = int(raw_input())
past = int(raw_input())
result = n + past
for i in range(n - 1):
    m = int(raw_input())
    result += abs(m - past) + 1
    past = m
print result