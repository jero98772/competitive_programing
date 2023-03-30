//https://codeforces.com/contest/1807/problem/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll a,b,c;cin>>a>>b>>c;
	if(a+b==c)cout<<"+"<<el;
	if(a-b==c)cout<<"-"<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
