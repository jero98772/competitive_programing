//https://codeforces.com/problemset/problem/1566/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	ll n,s;
	cin>>n>>s;
	ll mid=(n+1)/2;
	mid=n-(mid-1);
	cout<<s/mid<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
