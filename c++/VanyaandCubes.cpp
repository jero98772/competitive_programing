//https://codeforces.com/contest/492/problem/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int t;cin>>t;
	int cnt=0,i=1,m=1;
	while(m<=t){
		m=((i*i)+i)/2;
		if (m>t) break;
		t=t-m;
		cnt++;
		i++;
	}
	cout<<cnt<<el;
}
