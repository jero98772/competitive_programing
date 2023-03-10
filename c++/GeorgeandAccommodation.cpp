//pased
//https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int c=0;
	while(t--){		
		int x,y;cin>>x>>y;
		if(y-x>=2)c++;
	}
	cout<<c;
}