#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1760/problem/D pased
int main(){
	int n;cin>>n;
	while(n--){
		int r;cin>>r;
		int jarray[r];
		for(int i=0;i<r;i++){
			cin>>jarray[i];		
		}
		int f=1;
		for(int i=0;i<r-1 and f==1;i++){
			if(jarray[i]<jarray[i+1]){
				f=0;
				while(jarray[i+1]>=jarray[i] and i <r-1){i++;}
				if(i==r-1){cout<<"YES"<<endl;break;}
				else{cout<<"NO"<<endl;}		
			}		
		}if(f==1){cout<<"YES"<<endl;}
	}
}
