//pased
//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x;cin>>x;
	long long all=0;
	//for(long long i=1;i<x+1;i++){
		if(x%2==0){
			all=x/2;		
		}else{
			all=((x+1)/2)*(-1);
		}
	cout<<all;
}
