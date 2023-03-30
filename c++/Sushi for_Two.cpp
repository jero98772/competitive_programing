//pased
//https://codeforces.com/problemset/problem/1138/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
	fastread()
	ll t,tmp;cin>>t;
	ll arr[100005];
	fill(arr,arr+100005,1);
	vector<ll>v;
	for(int i=0;i<t;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	ll k=0,l=0,ans=0;
	for(int i=1;i<t;i++){
		if(v[i]==v[i-1]) arr[k]++;
		else k++;
	}
	for(int i=1;i<=k;i++){
		if(arr[i]==arr[i-1]){
			l=2*arr[i];
			ans=max(l,ans);		
		}else if(arr[i]>arr[i-1]){
			l=2*arr[i-1];
			ans=max(l,ans);		
		}
		else{
			l=2*arr[i];
			ans=max(l,ans);		
		}
	}
	cout<<ans<<el;
}
//https://github.com/SaruarChy/Codeforces-Solution/blob/master/1138%20A.%20Sushi%20for%20Two.cpp