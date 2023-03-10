//pased
//https://codeforces.com/contest/144/problem/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"

using namespace std;
int main(){
	int t,a;cin>>t>>a;
	int mina(a), maxa(a), mini(0), maxi(0);
	for (int i = 1; i < t; ++i){
		cin>>a;
		if(a>maxa){
			maxa=a;
			maxi=i;
		}if(a<=mina){
			mina=a;
			mini=i;
		}
	}	
	cout<<maxi + (t - 1 - mini)-(mini < maxi ? 1 : 0);
}
