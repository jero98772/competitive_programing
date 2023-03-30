//pased
//https://codeforces.com/problemset/problem/510/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int r,c;cin>>r>>c;
	bool nomore=false;
	int xpos=c-1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i%2==0)cout<<"#";
			else{
				if(xpos==j && nomore){
					if(xpos==c-1 && nomore)xpos=0;
					else if(xpos==0 && nomore)xpos=c-1;
					nomore=false;
					cout<<"#";
				}else cout<<".";
			}
		}
		nomore=true;
		cout<<el;
	}
}
int main(){
	int t=1;//cin>>t;
	while(t--){
		solve();
	}	
}
