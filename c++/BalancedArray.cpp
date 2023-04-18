//acepted
//https://codeforces.com/problemset/problem/1343/B
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	lli sum1,sum2,n;
	sum1=sum2=0;
	cin>>n;
	if(n%4!=0){
		cout<<"NO"<<el;
	}else{
		cout<<"YES"<<el;
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
			sum1+=i;
		}
		for(int i=1;i<n-2;i+=2){
			cout<<i<<" ";
			sum2+=i;
		}
		cout<<sum1-sum2<<el;
	}
	

}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
