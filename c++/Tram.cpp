//passed
//https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c=0,m=0;
	cin>>t;
	while(t--){
		cin>>a;
		cin>>b;
		c-=a;
		c+=b;
		if(c>m)m=c;
	}
	cout<<m;
}
