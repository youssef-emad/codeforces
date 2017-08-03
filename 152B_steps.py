n, m = map(int , raw_input().split())
xc, yc = map(int , raw_input().split())
k = int(raw_input())
count = 0
for i in range(k):
    steps = 0
    stepsx = 0
    stepsy = 0
    vx, vy = map(int , raw_input().split())
    if vx > 0:
        stepsx = (n - xc)/vx
    elif vx < 0:
        stepsx = (1 - xc)/vx
    if vy > 0:
        stepsy = (m - yc)/vy
    elif vy < 0:
        stepsy = (1 - yc)/vy
    if stepsx != 0 and stepsy != 0:
        steps = abs(min(stepsx, stepsy))
    elif stepsx == 0:
        steps = abs(stepsy)
    else:
        steps = abs(stepsx)
    if(xc + steps*vx <= n and xc + steps*vx > 0 and yc + steps*vy <=m and yc + steps*vy > 0
           and steps != 0):
        xc += steps * vx
        yc += steps * vy
        count += steps
print count