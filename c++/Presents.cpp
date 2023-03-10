//https://codeforces.com/problemset/problem/136/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int s;cin>>s;
	int ar[s+2];
	for(int i=1;i<=s;i++){
		int x;cin>>x;
		ar[x-1]=i;
	}
	for(int i=0;i<s;i++)cout<<ar[i]<<endl;	
}