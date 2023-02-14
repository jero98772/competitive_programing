//https://codeforces.com/problemset/problem/1691/A
//pased
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int s;cin>>s;
	int c=0;
	int x;
	for(int i=0;i<s;i++){
		cin>>x;
		
		c+=(x%2==0);

	}
	
	cout<<min(c,s-c)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
