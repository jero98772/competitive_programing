#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>

using namespace std;

class Graph {
public:
    // Adds an edge between two nodes with a given weight
    void add_edge(char u, char v, int weight) {
        adj_list[u].emplace_back(v, weight);
        adj_list[v].emplace_back(u, weight);  // If the graph is undirected
    }

    // Dijkstra's algorithm to find the shortest paths from a source node
    unordered_map<char, int> dijkstra(char start) {
        // Initialize distances with infinity
        unordered_map<char, int> distances;
        for (auto& pair : adj_list) {
            distances[pair.first] = numeric_limits<int>::max();
        }
        distances[start] = 0;

        // Min-heap to store (distance, vertex)
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
        pq.emplace(0, start);

        while (!pq.empty()) {
            int current_distance = pq.top().first;
            char current_vertex = pq.top().second;
            pq.pop();

            // If the current distance is greater than the known shortest distance, skip
            if (current_distance > distances[current_vertex]) continue;

            // Explore the neighbors
            for (auto& neighbor : adj_list[current_vertex]) {
                char neighbor_vertex = neighbor.first;
                int weight = neighbor.second;
                int distance = current_distance + weight;

                // Only consider this new path if it's better
                if (distance < distances[neighbor_vertex]) {
                    distances[neighbor_vertex] = distance;
                    pq.emplace(distance, neighbor_vertex);
                }
            }
        }

        return distances;
    }

private:
    unordered_map<char, vector<pair<char, int>>> adj_list;  // Adjacency list
};

int main() {
    Graph graph;

    // Example graph
    graph.add_edge('A', 'B', 1);
    graph.add_edge('A', 'C', 4);
    graph.add_edge('B', 'C', 2);
    graph.add_edge('B', 'D', 5);
    graph.add_edge('C', 'D', 1);

    char start_node = 'A';
    unordered_map<char, int> distances = graph.dijkstra(start_node);

    cout << "Distances from start node " << start_node << ":" << endl;
    for (auto& pair : distances) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
