//pased
//https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	string x1;cin>>x1;
	string x2;cin>>x2;
	for(int i=0;i<x1.length();i++){
		if(x1[i]==x2[i]){
			cout<<"0";		
		}else{
			cout<<"1";		
		}
	}
}