def connected_components(graph, n):
    length = 0
    result, global_visited = [], set()
    for i in range(1, n + 1):
        visited, stack = set(), [i]
        while stack:
            vertex = stack.pop()
            if vertex not in visited and vertex not in global_visited:
                length += 1
                visited.add(vertex)
                global_visited.add(vertex)
                for child in graph[vertex]:
                    if child not in visited and child not in global_visited:
                        stack.append(child)
        if visited:
            result.append(visited)
    return result

n, m = map(int, raw_input().split())
edges = []
graph = []
edges_count = [0] * (n + 1)
for i in range (n + 1):
    graph.append([])
for i in range(m):
    edge = map(int, raw_input().split())
    graph[edge[0]].append(edge[1])
    graph[edge[1]].append(edge[0])
    edges_count[edge[0]] += 1
connected = connected_components(graph, n)
for comp in connected:
    summ = 0
    count = 0
    can = True
    for item in comp:
        count += 1
        summ += edges_count[item]
    if summ != count * (count - 1)/2.0:
        can = False
        break
if can:
    print "YES"
else:
    print "NO"