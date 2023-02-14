//https://codeforces.com/problemset/problem/1520/A
//pased
#include <bits/stdc++.h>
using namespace std;
void solve(){
        map<char,int> m;
	bool a=true;
	int n;cin>>n;
	string txt;cin>>txt;
	for(int i=0;i<n;i++){
		if(m.count(txt[i])){
			cout<<"NO"<<endl;
			a=false;
			return ;	
		}else{
			if(txt[i]!=txt[i+1]){
				m.insert({txt[i],0});
			}
		}
	}
        if(a){
		cout<<"YES"<<endl;
		return ;
	}
	if(n==1){
		cout<<"YES1"<<endl;
	}
}
int main(){
 int t;cin>>t;
 for(int i=0;i<t;i++){
	solve();
}
}