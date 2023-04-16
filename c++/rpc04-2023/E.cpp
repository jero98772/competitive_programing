#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	double n2,x;cin>>n2>>x;
	double n=n2;
	double s=0,tmp;
	vector<int> v;
	while(n2--){
		cin>>tmp;
		v.push_back(tmp);
		s+=(tmp*tmp);
	}
	double m = s/n;
	double f = sqrt(x/m);
	for (int i=0; i<n; i++) {
		cout <<fixed << setprecision(6) << v[i]*f << " ";
	}
}
