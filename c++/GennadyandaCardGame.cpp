//https://codeforces.com/problemset/problem/1097/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	string c1;cin>>c1;
	for(int i=0;i<5;i++){
		string x;cin>>x;
		if(c1[1]==x[1] || c1[0]==x[0]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}
