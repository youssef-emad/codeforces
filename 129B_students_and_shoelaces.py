n, m = map(int, raw_input().split())
degrees = [0] * (n + 1) 
edges = []
for i in range(m):
    edge = map(int, raw_input().split())
    edges.append(edge)
    degrees[edge[0]] += 1
    degrees[edge[1]] += 1
condition = True
count = 0
while condition:
    condition = False
    for i in range(n):
        if degrees[i + 1] == 1:
            condition = True
            degrees[i + 1] = 0
    
    for edge in edges:
        if degrees[edge[0]] == 0 and degrees[edge[1]] > 0:
            degrees[edge[1]] -= 1
            degrees[edge[0]] = -1
        elif degrees[edge[1]] == 0 and degrees[edge[0]] > 0:
            degrees[edge[0]] -= 1
            degrees[edge[1]] = -1
    if condition:
        count += 1
print count