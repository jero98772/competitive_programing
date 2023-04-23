//acepted
//https://codeforces.com/problemset/problem/1624/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	cout<<a[n-1]-a[0]<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
