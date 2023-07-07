from collections import deque

class Graph:
    def __init__(self):
        self.graph = dict()
    
    def add(self, node1, node2, weight):
        if node1 in self.graph:
            self.graph[node1].append((node2, weight))
        elif node2 in self.graph:
            self.graph[node2].append((node1, weight))
        else:
            self.graph[node1] = [(node2, weight)]
            self.graph[node2] = [(node1, weight)]
    
    def get(self):
        return self.graph

def dfs(graph, start, visited=None):
	if not visited:
		visited=[start]
	visited_indices = [start]
	neighbors = sorted(graph[start], key=lambda x: x[1])  # Ordenar los vecinos por peso
	#print(neighbors)
	for neighbor, _ in neighbors:
		if not neighbor in visited:
			visited_indices += dfs(graph, neighbor, visited)
	return visited_indices

def main():
    g = Graph()
    for _ in range(int(input())):  
        n, v = map(int, input().split())  
        for i in range(v):
            n1, n2 = map(int, input().split())
            g.add(n1, n2, 2**(i+1))
        ks = g.get().keys()
        g2 = g.get()
        print(g2)
        listcicles=[]
        for i2 in ks: 
            visited = dict()
            for node in g2:
                visited[node] = False
            tmp = dfs(g2, i2)
            listcicles.append(tmp)
        listcicles.sort(reverse=True)
        print(listcicles)
        if len(listcicles[-1])<=2:
        	print("-1")
        else:
	        print(listcicles[0]) 

main()
