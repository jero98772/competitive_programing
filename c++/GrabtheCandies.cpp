//pased
//https://codeforces.com/contest/1807/problem/B
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll even=0;
	ll noeven=0;	
	ll x;cin>>x;
	ll tmp;
	for(int i=0;i<x;i++){
		cin>>tmp;
		if(tmp%2==0)even+=tmp;
		else noeven+=tmp;
	}
	if(even>noeven)cout<<"YES"<<el;
	else cout<<"NO"<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
