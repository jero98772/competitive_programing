//https://codeforces.com/problemset/problem/1611/B
//pased

#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll a,b;cin>>a>>b;
	ll t=a+b;
	t=(t-(t%4))/4;
	cout<<min(min(a,b),t)<<el;
}

int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
