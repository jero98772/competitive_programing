#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int n,m,k,i,j;cin>>n>>m>>k;
	int x,newv;
	vector<pair<int,int>> v;
	int tamc=1e9;
	while(k--){
		int c;
		cin>>i>>j;
		pair<int,int> tmpp(i,j);
		v.push_back(tmpp);
		c = min(n-i,m-j);
		tamc = min(c,tamc);
		min(x,newv);
	}
	cout << tamc<<el;
}
