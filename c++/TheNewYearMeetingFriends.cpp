//https://codeforces.com/problemset/problem/723/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	ll a,b,c;cin>>a>>b>>c;
	ll ma =max(a,max(b,c));
	ll mi =min(a,min(b,c));
	cout<<ma-mi<<el;

}
