//pased
//https://codeforces.com/problemset/problem/1535/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		vector<int> v2(4);
		vector<int> v(4);
		for(int i=0;i<4;i++){
			int x;cin>>x;
			v[i]=x;
			v2[i]=x;
		}
		sort(v2.begin(),v2.end());
		if((v2[3]==v[0] || v2[3]==v[1]) && (v2[2]==v[0] || v2[2]==v[1]) ||	(v2[3]==v[2] || v2[3]==v[3]) && (v2[2]==v[2] || v2[2]==v[3])){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}