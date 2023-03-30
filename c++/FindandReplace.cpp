//pased
//https://codeforces.com/contest/1807/problem/C
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	map<char,int> m;
	int x;cin>>x;
	int bin1[x];
	//for(int x;i<x;i++) bin1[x]=i%2;
	string txt;cin>>txt;
	for(int i=0;i<x;i++){
		//cout<<m[txt[i]];
		if(m.count(txt[i])){
			bin1[i]=i%2;
			if(bin1[m[txt[i]]]!=i%2){
				cout<<"NO"<<el;
				return;
			}
		}else{
			m[txt[i]]=i;
			bin1[i]=i%2;
			//cout<<m[txt[i]]<<txt[i]<<el;
		}		
		
	}for(int i=1;i<x;i++){
		//cout<<bin1[i-1]<<el;
		//cout<<bin1[i]<<el;
		if(bin1[i-1]==bin1[i]){
			cout<<"NO"<<el;
			return ;
		}
	}cout<<"YES"<<el;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
