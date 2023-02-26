//https://codeforces.com/problemset/problem/492/B
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,m;
	cin>>a>>b;
	int ar[a];
	for(int i=0;i<a;i++){
		cin>>ar[i];
	}
	sort(ar,ar+a);
	m=max(ar[0],b-ar[a-1])*2;
	for(int i=0;i<a-1;i++){
		m=max(m,ar[i+1]-ar[i]);
	}
	cout.precision(20);
	cout<<fixed<<m/2.0;	
	//cout<<(double)max(z,ans);
   	 return 0;
}
