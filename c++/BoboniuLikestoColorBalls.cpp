//https://codeforces.com/group/Ct1cN5bG36/contest/341452/problem/G
//pased
#include <bits/stdc++.h>
using namespace std;
int iseven(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
void solve(){
	int r,b,g,w;
	cin>>r;
	cin>>b;
	cin>>g;
	cin>>w;
	int sum=iseven(r)+iseven(b)+iseven(g)+iseven(w);
	//cout<<sum;

	if (sum==1 && (r==0 || g==0 || b==0 ) ){
		cout<<"No"<<endl;	
	}
	else if(sum==0 || sum==4 || sum==3 || sum==1 ){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		solve();	
	}
}