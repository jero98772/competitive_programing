//acepted
//https://codeforces.com/problemset/problem/1367/B
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int t,n,a[100];cin>>t;
	while(t--){
		int c=0,flag=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int odd=0,even=0;
		for(int i=0;i<n;i++){
			if(i%2!=a[i]%2){
				if(a[i]%2==1) odd++;
				else even++;
			}
		}
		if(odd!=even) cout<<-1<<el;
		else cout<<even<<el;
	}	
}
