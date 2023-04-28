//https://codeforces.com/problemset/problem/749/A
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int n;cin>>n;
	if(n%2==1){
		n/=2;
		n--;
		cout<<n+1<<el<<3<<" ";
	}else{
		n/=2;
		cout<<n<<el;
	}
	for(int i=0;i<n;i++){
		cout<<2<<" ";
	}
}
