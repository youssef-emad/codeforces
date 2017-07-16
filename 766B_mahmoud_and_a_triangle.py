n = int(raw_input())
values = map(int, raw_input().split())
values.sort(reverse=True)
yes = False
for i in range(n - 2):
    if values[i + 1] + values[i + 2] > values[i] and values[i] + values[i + 2] > values[i + 1]:
        yes = True
        break
if yes:
    print "YES"
else:
    print "NO"