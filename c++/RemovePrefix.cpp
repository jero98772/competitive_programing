//https://codeforces.com/problemset/problem/1714/B
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll n,i,j;cin>>n;
	set<ll> s;
	ll a[n];
	bool no=false;
	for(i=0;i<n;i++)cin>>a[i];	
	for(i=n-1,j=1;i>=0;i--,j++){
		s.insert(a[i]);
		if(s.size()<j){
			cout<<n-j+1<<el;
			no=true;break;
		}
	}
	if(!no) cout<<0<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
