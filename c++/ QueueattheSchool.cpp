//pased
//https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	string txt;
	cin>>n>>t>>txt;
	while(t--){
		for(int i=1;i<n;i++){
			if(txt[i]=='G' && txt[i-1]=='B'){
				txt[i]='B';
				txt[i-1]='G';
				i++;
			}
				
		}
	}
cout<<txt<<endl;
}