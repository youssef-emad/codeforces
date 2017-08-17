import math
n, k = map(int , raw_input().split())
if k > math.ceil(pow(n, 2)/2.0):
    print "NO"
else:
    print "YES"
    value = 1
    line = 1
    if n%2 == 0:
        value = -1
    for i in range(n):
        output = ""
        line *= value
        for j in range(n):
            position = n * i + j
            if ((position%2 == 0 and line == 1) or (position%2 != 0 and line == -1)) and k > 0:
                k -= 1
                output += 'L'
            else:
                output += 'S'
            
        print output