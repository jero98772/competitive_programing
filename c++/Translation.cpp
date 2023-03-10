//https://codeforces.com/problemset/problem/41/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	string t1,t2;
	cin>>t1>>t2;
	reverse(t1.begin(),t1.end());
	if(t1==t2){
		cout<<"YES";
	}else{
cout<<"NO";
	}
}