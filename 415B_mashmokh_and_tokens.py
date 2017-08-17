n, a, b = map(int, raw_input().split())
values = map(int, raw_input().split())
for value in values:
    print ((value * a) % b) / a,