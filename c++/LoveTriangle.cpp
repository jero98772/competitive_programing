//https://codeforces.com/problemset/problem/939/A
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	ll t;cin>>t;
	ll a[5002];
	for(ll i=1;i<=t;i++){
		cin>>a[i];
	}
	int flag=0;
	for(ll i=1;i<=t;i++){
		if(a[a[a[i]]]==i){
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"YES"<<el;
	}else{
		cout<<"NO"<<el;
	}
}
