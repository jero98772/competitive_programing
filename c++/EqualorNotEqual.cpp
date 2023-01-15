//https://codeforces.com/problemset/problem/1620/A
//pased
#include <bits/stdc++.h>
using namespace std;
void solve(){
	//bool ac=true;
	int ns=0;
	string txt;cin>>txt;
	for(int i=0;i<txt.size();i++){
		if(ns>=2){
			cout<<"YES"<<endl;
			return;
			break;
		}else{
			if(txt[i]=='N')
			ns++;
		}
	}
	if(ns==1){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}
}