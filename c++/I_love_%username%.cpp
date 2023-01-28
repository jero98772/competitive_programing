//pased
//https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int points=0;
	int t;cin>>t;
	int n;cin>>n;
	int max=n;
	int min=n;
	for(int i=0;i<t-1;i++){
		cin>>n;
		if(n>max){
			max=n;
			points++;
		}
		if(n<min){
			min=n;
			points++;
		}
	}
	cout<<points;
}
