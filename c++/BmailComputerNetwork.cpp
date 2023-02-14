//https://codeforces.com/problemset/problem/1057/A
//pased
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[200005];
int parent[200005];
void dfs(int node,int p){
	parent[node]=p;
	for(int child: adj[node]){
		if(child!=p){
			dfs(child,node);		
		}
	}
}
int main(){
	int n;cin>>n;
	for(int i=2;i<=n;i++){
		int a;cin>>a;
		adj[a].push_back(i);
		adj[i].push_back(a);
	}
	dfs(1,-1);
	stack<int> s;
	while(n!=-1){
		s.push(n);
		n=parent[n];
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}