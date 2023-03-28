//https://codeforces.com/problemset/problem/1399/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	int n,a[55];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<"YES\n";
		return;
	}
	sort(a,a+n);
	vector<int> vi;
	int dif =0;
	for(int i=1;i<n;i++){
		dif=abs(a[i]-a[i-1]);
		vi.push_back(dif);
	}
	sort(vi.begin(),vi.end(),greater<int>());
	if(vi[0]>1){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
