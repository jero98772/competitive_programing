//https://codeforces.com/problemset/problem/381/A
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int t;cin>>t;
	ll arr[t+4];
	ll l=1,r=t,s1=0,s2=0;
	for(int i=1;i<=t;i++){
		cin>>arr[i];
	}
	ll i=1;
	while(l<=r){
		if(i%2==1){
               		if(arr[l]>=arr[r])s1+=arr[l++];
                	else s1+=arr[r--];
		}else{
			if(arr[l]>=arr[r]) s2+=arr[l++];
			else s2+=arr[r--];
		}
		i++;
	}
	cout<<s1<<" "<<s2<<el;
}
