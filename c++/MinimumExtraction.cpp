//https://codeforces.com/problemset/problem/1607/C
//pased
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		ll n,i,s=0;
		cin>>n;
		ll a[n];
		for(auto &i:a)cin>>i;
		sort(a,a+n);
		ll res=a[0];
		for(i=0;i<n;i++){
			a[i]-=s;
			s+=a[i];
		}
		for(i=0;i<n;i++){
			res=max(res,a[i]);
		}

		cout<<res<<endl;
	}	

}


