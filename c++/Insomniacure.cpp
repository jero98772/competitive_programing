//pased
//https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	ll k,l,m,n,d;
	ll cont=0;
	cin>>k>>l>>m>>n>>d;
	cont=d;
	if(l==1 || k==1 || m==1 || n==1) cout<<d<<el;	
	else{
		for(int i=1;i<=d;i++){
			if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))cont--;

		}
		cout<<cont<<el;
	}
}
