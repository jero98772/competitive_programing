//https://codeforces.com/problemset/problem/1374/A
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll x,y,n;cin>>x>>y>>n;
	ll ans=0;
	ans=n-n%x+y;
	if(ans<=n) cout<<ans<<el;
	else cout<<(n-n%x-(x-y))<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
