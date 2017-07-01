n,k = map(int, raw_input().split())
values = map(int, raw_input().split())
can = True

if max(values) - min(values) > k:
    print "NO"
else:
    print "YES"
    for value in values:
        for i in range(value):
            print i%k + 1,
        print ""