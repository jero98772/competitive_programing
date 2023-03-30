//https://codeforces.com/problemset/problem/490/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int t,x;cin>>t;
	vector<int> one;
	vector<int> two;
	vector<int> tree;

	for(int i=0;i<t;i++){
		cin>>x;//cout<<x;
		if(x==1)one.push_back(i);
		if(x==2)two.push_back(i);
		if(x==3)tree.push_back(i);
	}
	int t2=min(one.size(),min(two.size(),tree.size()));
	cout<<t2<<el;
	for(int i=0;i<t2;i++){
		cout<<one[i]+1<<" "<<two[i]+1<<" "<<tree[i]+1<<el;
		//one.erase(one.begin()+one[i]);
		//two.erase(two.begin()+two[i]);
		//tree.erase(tree.begin()+tree[i]);
	}
}
