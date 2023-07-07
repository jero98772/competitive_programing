//https://codeforces.com/problemset/problem/1669/A
//pased

#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int x;cin>>x;
	if(1900<=x){
		cout<<"Division 1"<<el;
	}else if(1600<=x && x<=1899 ){
		cout<<"Division 2"<<el;
	}else if(1400<=x && x<=1599){
		cout<<"Division 3"<<el;
	}else{
		cout<<"Division 4"<<el;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
