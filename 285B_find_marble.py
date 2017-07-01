n,s,t = map(int,raw_input().split())
positions = map(int,raw_input().split())
count = 0

while(count < n):
    if(s == positions[s - 1] and s != t):
        print -1
        break
    elif(s == t):
        print count
        break
    else:
        s = positions[s - 1]
        count += 1
if count == n:
    print -1