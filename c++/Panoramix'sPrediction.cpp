//
//pased
//https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;
vector<bool> criba(int n){//criba
	vector<bool> v(n+10,true);
	v[0]=false;
	v[1]=false;
	for(int i=2;i<n;i++){
		if(v[i] && i*i<=n){
			for(int ii=i*i;ii<=n;ii+=i){
				v[ii]=false;
			}
		}
	}
	return v;
}

int main(){
	int n,m;cin>>n>>m;
	//m++;
	auto v2=criba(m);
	/*for(int i=0;i<=m;i++){
		cout<<v2[i]<<" "<<i<<endl;
	}*/
	if(!v2[m]){
		cout<<"NO"<<endl;
		return 0;
	}for(int i=n+1;i<m;i++){
		if(v2[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
