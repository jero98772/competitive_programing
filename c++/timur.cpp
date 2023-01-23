//https://codeforces.com/problemset/problem/1722/A
//pased
#include <bits/stdc++.h>
using namespace std;
void solve(){
	string txt;
	int size;cin>>size;
	bool t,i,m,u,r=false;
	t=i=m=u=r=false;
	if(size==5){
		cin>>txt;

		for(int j=0;j<5;j++){
			if(txt[j]=='T' && isupper(txt[j]) )t=true;
			if(txt[j]=='i' && islower(txt[j]) )i=true;
			if(txt[j]=='m' && islower(txt[j]))m=true;
			if(txt[j]=='u' && islower(txt[j]))u=true;
			if(txt[j]=='r' && islower(txt[j]))r=true;
		}

		//cout<<t<<i<<m<<u<<r<<endl;
		if(t&&i&&m&&u&&r){cout<<"YES"<<endl;return;}
		else{cout<<"NO"<<endl;return;}
		t=i=m=u=r=false;
	}else{
		cin>>txt;
		cout<<"NO"<<endl;
		return;
	}
}
int main(){

	int test;cin>>test;
	while(test--){
		solve();
	}
}