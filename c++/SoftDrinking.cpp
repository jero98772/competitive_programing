//acepteed
//https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int t1=(k*l)/nl;
	int t2=c*d;
	int t3=p/np;
	cout<<min(t1,min(t2,t3))/n<<el;
}
