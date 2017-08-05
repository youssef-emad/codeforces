import math
n, m = map(int , raw_input().split())
red_clicks = 0
blue_clicks = 0
if n >= m:
    print n - m
else:
    while(n < m):
        if m%2 == 0:
            m /= 2
            red_clicks += 1
        else:
            m += 1
            blue_clicks += 1
    blue_clicks += n - m
    print red_clicks + blue_clicks 