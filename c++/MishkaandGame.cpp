//acepted
//https://codeforces.com/problemset/problem/703/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int t;cin>>t;
	int c=0,m=0,d=0,csum=0,msum=0;
	while(t--){
		cin>>m>>c;
		if(m>c) msum++;	
		else if(m==c) d++;	
		else if(m<c) csum++;

	}
	if(msum==csum || d==t) cout<<"Friendship is magic!^^"<<el;
	else if(csum>msum) cout<<"Chris"<<el;
	else if(msum>csum) cout<<"Mishka"<<el;
}
