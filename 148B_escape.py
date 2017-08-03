vp = int(raw_input())
vd = int(raw_input())
t = int(raw_input())
f = int(raw_input())
c = int(raw_input())
if vp >= vd:
    print 0
else:
    time = t
    distance = vd * (vp * time * 1.0)/(vd - vp)
    boj = 0
    while distance < c:
        boj += 1
        d2 = distance + vp * f + vp * (distance/vd)
        distance = vd * (d2) / (vd - vp)
    print boj