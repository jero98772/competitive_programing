//https://codeforces.com/contest/1791/problem/G1
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long c;cin>>c;
		vector<long long> cv(n);
		for(int i=0;i<n;i++){
			cin>>cv[i];
		}
		int t2=0;
		vector<long long> vals;
		for(int i=0;i<n;i++){
			vals.push_back(cv[i]+i+1);
		}
		sort(vals.begin(),vals.end());
		long long sum=0;
		for(int i=0;i<n;i++){
			if(sum+vals[i]<=c){
				++t2;sum+=vals[i];
			}
		}
		cout<<t2<<endl;
	}
}
