//pased
//https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	float sum=0;
	vector<int> v;
	int n,k,x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i]<=(5-k)){
			sum++;	
		}else{
			break;		
		}
	}
	cout<<floor(sum/3)<<el;
}
int main(){
	int t=1;//cin>>t;
	while(t--){
		solve();
	}	
}
