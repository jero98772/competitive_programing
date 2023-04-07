//acepted
//https://codeforces.com/problemset/problem/1367/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	string s,t="";cin>>s;
	t+=s[0];
	for(int i=1;i<s.length()-1;i++){
		if(s[i]==s[i-1]){
			t+=s[i];
			i++;
		}
	}
	t+=s[s.length()-1];
	cout<<t<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
