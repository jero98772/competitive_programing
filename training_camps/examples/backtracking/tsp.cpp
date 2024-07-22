#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// Function to find the minimum cost route
void tspUtil(int currentCity,int n,vector<vector<int>>& graph, vector<bool>& visited, int count,int cost, int& minCost, int startCity){
    if(count == n && graph[currentCity][startCity]>0){
        minCost=min(minCost,cost+graph[currentCity][startCity]);
        return;
    }
    // Try all possibilities by visiting each unvisited city
    for (int i = 0; i < n; ++i)
    {
        if(!visited[i] && graph[currentCity][i]>0){
            visited[i]=true;
            tspUtil(i,n,graph,visited,count+1,cost+graph[currentCity][i],minCost,startCity);
            visited[i]=false;
        }
    }
}


int tsp(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n,false);
    visited[0]=true;
    int minCost=INT_MAX;
    tspUtil(0,n,graph,visited,1,0,minCost,0);
    return minCost;
}

int main() {
    // Example graph: matrix representation of distances between cities
    vector<vector<int>> graph = {
        {0, 10, 15, 20,12},
        {10, 0, 35, 25,20},
        {15, 35, 0, 30,40},
        {20, 25, 30, 0,70},
        {12, 20, 40, 70,0},
    };

    int result = tsp(graph);
    cout << "The minimum cost to visit all cities and return to the start is: " << result << endl;

    return 0;
}
