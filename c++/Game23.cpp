#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n;cin>>m;
	int i=0;
	bool alert=false;
	if(m%n==0){
		m=m/n;
		alert=true;
	}else cout<<"-1"<<endl;
	
	while(alert && m!=1){
		if(m%2==0){
			m=m/2;	
		}else if(m%3==0){
			m=m/3;
		}else{
			cout<<"-1"<<endl;
			break;
		}
		i++;
	}
	if(m==1){
		cout<<i<<endl;
	}
}