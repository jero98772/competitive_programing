//pased
//https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int n;cin>>n;
	int ans= n/2;
	if(n%2==0){
		cout<<ans-1<<el;
	}else{
		cout<<ans<<el;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
