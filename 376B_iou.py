n, m = map(int, raw_input().split())
inside = [0] * (n + 1)
outside = [0] * (n + 1)
output = 0
for i in range(m):
    debt = map(int, raw_input().split())
    inside[debt[1]] += debt[2]
    outside[debt[0]] += debt[2]
for i in range(n + 1):
    difference = outside[i] - inside[i]
    if difference > 0:
        output += difference
print output