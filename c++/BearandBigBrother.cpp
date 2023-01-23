//https://codeforces.com/problemset/problem/791/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	int a,b;cin>>a;cin>>b;
	do{
		a*=3;
		b*=2;
		count++;
	}while(a<b);
	if(a==b){
		count++;
	}
	cout<<count<<endl;
}
