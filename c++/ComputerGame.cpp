//pased
//https://codeforces.com/problemset/problem/1598/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int columns;cin>>columns;
		bool al=true;
		string col1,col2;cin>>col1>>col2;
		for(int i=1;i<columns;i++){
			if((col1[i]=='0' && col1[i-1]=='0') || (col2[i]=='0' && col2[i-1]=='0') || (col1[i]=='0' && col2[i-1]=='0') || (col2[i]=='0' && col1[i-1]=='0')){
				continue;	
			}else{
				al=false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(al)cout<<"YES"<<endl;
	}
}