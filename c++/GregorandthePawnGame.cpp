//https://codeforces.com/problemset/problem/1549/B
//pased
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll n,i,j=0;
	cin>>n;
	string enemy,gre;
	cin>>enemy>>gre;
	ll ans=0;
	ll mark[n]={0};
	for(ll i=0;i<n;i++){
		if(gre[i]=='0') continue;
		if(gre[i]=='1' && enemy[i]=='0') ans++;
		else{
			if(i-1>=0&& enemy[i-1]=='1' && mark[i-1]==0){
				ans++;
				mark[i-1]=1;
			}else if(i+1>=0&& enemy[i+1]=='1' && mark[i+1]==0){
				ans++;
				mark[i+1]=1;
			}
		}
	}
	cout<<ans<<endl;
}
int main(){
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}