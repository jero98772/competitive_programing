//https://codeforces.com/problemset/problem/677/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int h;cin>>h;
	int total=0;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(h>=x){	
			total++;
		}
		else{
			total+=2;		
		}
	}
	cout<<total;
}