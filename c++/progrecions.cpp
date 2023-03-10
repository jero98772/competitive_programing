#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
ll arimeticprog(n,a,b){
	return (n*(a+b))/2;
}
ll geometricprog(k,a,b){
	return ((b*k)-a)/(k-1);
}


using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
