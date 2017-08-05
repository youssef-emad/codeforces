n, x0, y0 = map(int, raw_input().split())
slopes = set()
for i in range(n):
    x, y = map(int, raw_input().split())
    if x - x0 == 0:
        slope = 0
    elif y - y0 == 0:
        slope = 100000000 
    else:
        slope = (y*1.0 - y0)/(x - x0)
    slopes.add(slope)
print len(slopes)