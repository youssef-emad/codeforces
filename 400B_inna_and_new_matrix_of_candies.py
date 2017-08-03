n, m = map(int, raw_input().split())
g_indeces = []
s_indeces = []
diff = []
can = True
minimum_distance = 2000
count = 0
for i in range(n):
    inputt = raw_input()
    s_index = inputt.index('S')
    g_index = inputt.index('G')
    output = s_index - g_index
    if output < 0:
        can = False
    else:
        g_indeces.append(g_index)
        s_indeces.append(s_index)
        diff.append(output)
        if output < minimum_distance:
            minimum_distance = output
if can:
    condition = True
    while(condition):
        condition = False
        count += 1
        for i in range(n):
            g_indeces[i] += minimum_distance
            distance = s_indeces[i] - g_indeces[i]
            diff[i] = distance
            if distance > 0:
                condition = True
        minimum_distance = 2000
        for i in range(n):
            if diff[i] < minimum_distance and diff[i] > 0:
                minimum_distance = diff[i]
    print count
else:
    print -1