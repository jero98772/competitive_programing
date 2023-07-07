#passed
#https://codeforces.com/group/DA7Y6pkafQ/contest/452535/problem/D
import heapq

def dijkstra(graph, n):
    distance = [float('inf')] * n
    distance[0] = 0

    previous = [-1] * n

    pq = [(0, 0)]  # (distance, vertex)
    heapq.heapify(pq)

    while pq:
        dist, curr_vertex = heapq.heappop(pq)

        if dist > distance[curr_vertex]:
            continue

        for neighbor, weight in graph[curr_vertex]:
            new_dist = distance[curr_vertex] + weight

            if new_dist < distance[neighbor]:
                distance[neighbor] = new_dist
                previous[neighbor] = curr_vertex
                heapq.heappush(pq, (new_dist, neighbor))

    if distance[n-1] == float('inf'):
        return -1

    path = []
    curr_vertex = n-1

    while curr_vertex != -1:
        path.append(curr_vertex+1)
        curr_vertex = previous[curr_vertex]

    return list(reversed(path))

# Read input
n, m = map(int, input().split())

# Create adjacency list
graph = [[] for _ in range(n)]

# Read edges and build graph
for _ in range(m):
    a, b, w = map(int, input().split())
    graph[a-1].append((b-1, w))
    graph[b-1].append((a-1, w))

# Solve using Dijkstra's algorithm
shortest_path = dijkstra(graph, n)

# Output result
if shortest_path == -1:
    print(-1)
else:
    print(*shortest_path)

import heapq

def dijkstra(graph, n):
    distance = [float('inf')] * n
    distance[0] = 0

    previous = [-1] * n

    pq = [(0, 0)]  # (distance, vertex)
    heapq.heapify(pq)

    while pq:
        dist, curr_vertex = heapq.heappop(pq)

        if dist > distance[curr_vertex]:
            continue

        for neighbor, weight in graph[curr_vertex]:
            new_dist = distance[curr_vertex] + weight

            if new_dist < distance[neighbor]:
                distance[neighbor] = new_dist
                previous[neighbor] = curr_vertex
                heapq.heappush(pq, (new_dist, neighbor))

    if distance[n-1] == float('inf'):
        return -1

    path = []
    curr_vertex = n-1

    while curr_vertex != -1:
        path.append(curr_vertex+1)
        curr_vertex = previous[curr_vertex]

    return list(reversed(path))

# Read input
n, m = map(int, input().split())

# Create adjacency list
graph = [[] for _ in range(n)]

# Read edges and build graph
for _ in range(m):
    a, b, w = map(int, input().split())
    graph[a-1].append((b-1, w))
    graph[b-1].append((a-1, w))

# Solve using Dijkstra's algorithm
shortest_path = dijkstra(graph, n)

# Output result
if shortest_path == -1:
    print(-1)
else:
    print(*shortest_path)
