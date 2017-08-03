n = int(raw_input())
values = map(int, raw_input().split())
values_set = set(values)
length = len(values_set)
if length > 3:
    print "NO"
elif length < 3:
    print "YES"
else:
    values_set = sorted(values_set)
    if abs(values_set[0] - values_set[1]) == abs(values_set[1] - values_set[2]):
        print "YES"
    else:
        print "NO"