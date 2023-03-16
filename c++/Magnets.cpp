//https://codeforces.com/problemset/problem/344/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	string x,tmp;
	cin>>x;
	tmp =x;
	t--;
	int co=0;
	while(t--){
		cin>>x;
		if(x!=tmp){
			co++;
		}
		tmp=x;
	}
	cout<<co+1;
}