//acepted
//https://codeforces.com/profile/jero98772
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int t,x;cin>>t;
	int ma=0,sum=0;
	int ar[t+2];
	for(int i=0;i<t;i++){
		cin>>ar[i];
		ma=max(ar[i],ma);
	}
	for(int i=0;i<t;i++){
		sum+=ma-ar[i];
	}
	cout<<sum<<el;
}
