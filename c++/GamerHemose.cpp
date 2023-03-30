//pased
//https://codeforces.com/problemset/problem/1592/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll n,h;
	cin>>n>>h;
	vector<ll> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	ll x=a[n-1];
	ll y=a[n-2];
	if(h%(x+y)==0)cout<<2*(h/(x+y))<<el;
	else if(h%(x+y)<=x)cout<<2*(h/(x+y))+1<<el;
	else cout<<2*(h/(x+y))+2<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
