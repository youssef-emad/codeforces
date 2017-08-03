n, t1, t2, k = map(int , raw_input().split())
heights = []
for i in range(n):
    sp1, sp2 = map(int , raw_input().split())
    heights.append(max(t1*sp1*((100 - k)/100.0) + t2*sp2, t1*sp2*((100 - k)/100.0) + t2*sp1))
sorted_indeces = sorted(range(n), key=lambda k: heights[k], reverse= True)
for i in range(n):
    print sorted_indeces[i] + 1, "%.2f" % heights[sorted_indeces[i]]