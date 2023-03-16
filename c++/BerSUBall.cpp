//https://codeforces.com/problemset/problem/489/B
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
 int n,m,a[101],b[101],tm1,tm2;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 cin>>m;
 for(int i=0;i<m;i++){
  cin>>b[i];
 }
sort(a,a+n);
 sort(b,b+m);
int c=0;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(abs(a[i]-b[j])<2){
			b[j]=1000;
			c++;
			break;
		}
	}
}
cout<<c;
}