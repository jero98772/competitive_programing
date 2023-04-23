//acepted
//https://codeforces.com/problemset/problem/1360/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int a,b;cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	cout<<max(a*2,b)*max(a*2,b)<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
