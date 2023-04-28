//https://codeforces.com/problemset/problem/1360/B
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	vector<int> v;
	int diff=0;
	for(int i=1;i<n;i++){
		diff=a[i]-a[i-1];
		v.push_back(diff);
	}
	sort(v.begin(),v.end());
	cout<<v[0]<<el;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
