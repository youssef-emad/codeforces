import math
a, x, y = map(int, raw_input().split())
if abs(x) >= a or (abs(x) < a and y*1.0/a == int(y/a)) or (y < a and abs(x) >= a/2.0):
    print -1
elif y<a and abs(x) < a/2.0:
    print 1
elif y/(a*1.0) != int(y/a):
    number = math.ceil(y/(a * 1.0))
    if number% 2 == 0 and abs(x) < a/2.0:
        print int(number * 3/2.0 - 1)
    elif number% 2 != 0 and x < 0:
        number -= 1
        print int(number * 3/2.0)
    elif number% 2 != 0 and x > 0:
        number -= 1
        print int(number * 3/2.0 + 1)
    else:
        print -1
else:
    print -1