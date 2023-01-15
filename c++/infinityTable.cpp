//https://codeforces.com/group/Ct1cN5bG36/contest/341452/problem/H
//passed
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int impares=1;
	int i=1;
	int x,y;	
	while(impares<n){
		impares=((i+1)*(i+1));
		i++;
	}
	int midle=((i-1)*(i-1))+i;
	x=i;
	y=i;
	//cout<<x<<" "<<y<<endl;		
	if(midle>n){
		while(midle!=n){
			midle--;
			x--;
		}
	}
	else if(midle<=n){
		while(midle!=n){
			midle++;
			y--;
		}
	}
	cout<<x<<" "<<y<<endl;
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}
}