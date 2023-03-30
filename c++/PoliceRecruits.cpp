//https://codeforces.com/problemset/problem/427/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int t,x;cin>>t;
	int tol=0;
	int minx=0;
	for(int i=0;i<t;i++){
		cin>>x;
		tol+=x;		
		minx=min(minx,tol);
	}
	cout<<minx*-1<<el;
}
