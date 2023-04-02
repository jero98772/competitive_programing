//acepted
//https://codeforces.com/problemset/problem/581/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int a,b;cin>>a>>b;
	if(a>=b){
		cout<<b<<" "<<(a-b)/2<<el;
	}else{
		cout<<a<<" "<<(b-a)/2<<el;
	}
}
