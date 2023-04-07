//acepted
//https://codeforces.com/problemset/problem/1409/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll a,b;cin>>a>>b;
	if(b<a){
		ll tmp=a;
		a=b;
		b=tmp;
	}
	ll sub=0,sum=0,div=0,mod=0;
	sub=b-a;
	div=sub/10;
	mod=sub%10;
	sum=div;
	if(mod>0){
		sum++;
	}
	cout<<sum<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
