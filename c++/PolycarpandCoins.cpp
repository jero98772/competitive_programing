//acepted
//https://codeforces.com/problemset/problem/1551/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll n;
	cin>>n;
	ll c1=n/3;
	ll c2=n/3;
	if(n%3==1){
		c1++;
	}else if(n%3==2){
		c2++;
	}
	cout<<c1<<" "<<c2<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
