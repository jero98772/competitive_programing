
//https://codeforces.com/contest/1772/problem/B
//pased
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a1,a2,b1,b2,tmp;
	cin>>a1;
	cin>>a2;
	cin>>b1;
	cin>>b2;
	bool no=true; 
	if(a1<a2 && a1<b1 && a2<b2 && b1<b2){
		cout<<"YES"<<endl;
		bool no=false;
		return;
	}
	for(int i=0;i<3;i++){
	 	tmp=a1;
		a1=a2;
		a2=b2;
		b2=b1;
		b1=tmp;
		//cout<<" "<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
		if(a1<a2 && a1<b1 && a2<b2 && b1<b2){
			cout<<"YES"<<endl;
			bool no=false;
			return;			
			break;
		}
	}
	if(no){
		cout<<"NO"<<endl;
	}	
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}
}