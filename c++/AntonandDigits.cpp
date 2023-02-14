//pased
//https://codeforces.com/problemset/problem/734/B
#include <bits/stdc++.h>
using namespace std;
int main(){
	int k1,k2,k3,k4;cin>>k1>>k2>>k3>>k4;
	int t1,t2;
	t1=min({k1,k3,k4})	;
	k1-=t1;

	k3-=t1;
	k4-=t1;
	t2=min(k2,k1);
	cout<<256*t1+32*t2;
}