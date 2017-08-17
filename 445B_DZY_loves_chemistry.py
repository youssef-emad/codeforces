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
for i in range (n + 1):
    graph.append([])
for i in range(m):
    edge = map(int, raw_input().split())
    graph[edge[0]].append(edge[1])
    graph[edge[1]].append(edge[0])
connected = connected_components(graph, n)
length = 0
for comp in connected:
    length += len(comp) - 1
print pow(2, length)