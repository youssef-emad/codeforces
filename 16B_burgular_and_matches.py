n, m = map(int, raw_input().split())
boxes = [0] * m
matches = [0] * m
output = 0
for i in range(m):
    boxes[i], matches[i] = map(int, raw_input().split())
greatest_matches_indeces = sorted(range(m), key=lambda k: matches[k])
for i in range(m):
    match_index = greatest_matches_indeces[m - 1 - i]
    if n <= 0:
        break
    if n >= boxes[match_index]:
        output += boxes[match_index] * matches[match_index]
        n -= boxes[match_index]
    else:
        output += n * matches[match_index]
        n = 0
print output