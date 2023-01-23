//https://codeforces.com/problemset/problem/617/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int count=0;
	while(n>0){
		for(int i=5;i>0;i--){
			if(n>=i){
				//cout<<i<<endl;
				count++;
				n=n-i;
				break;
			}
		}
		//count++;	
	}
	cout<<count<<endl;
}

