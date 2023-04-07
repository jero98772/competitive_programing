//https://codeforces.com/problemset/problem/472/A
//aceptded
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
bool check(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return true;
	}
	return false;
}
int main(){
	int t;cin>>t;
	for(int i=2;i<=t/2;i++){
		if(check(i)&&check(t-i)){
			cout<<i<<" "<<t-i<<el;break;}
	}
}
