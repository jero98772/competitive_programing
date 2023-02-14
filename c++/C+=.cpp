//https://codeforces.com/problemset/problem/1368/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	//while(t--){
	for(int i=0;i<t;i++){
		int a,b,n;
		cin>>a>>b>>n;
		int co=0;
		int s=0;
		while(true){
			if(a<b){
				a+=b;
				co++;
				s=a;
			}else{
				b+=a;
				co++;
				s=b;

			}
			if(s>n){
				break;
			}
			
		}
	cout<<co<<endl;
	}
}
