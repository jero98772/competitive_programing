//https://codeforces.com/problemset/problem/141/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c,s;
	cin>>a>>b>>c;
	s=a+b;	
	sort(s.begin(),s.end());
	sort(c.begin(),c.end());
	if(s==c){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}