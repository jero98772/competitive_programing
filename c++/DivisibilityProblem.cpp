//pased
//https://codeforces.com/problemset/problem/1328/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int a,b;cin>>a>>b;
	if(a%b==0){
		cout<<0<<el;
	}
	else{
		int x=a%b;
		cout<<b-x<<el;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
