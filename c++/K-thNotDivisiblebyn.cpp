//pased, using for dont pass
//https://codeforces.com/problemset/problem/1352/C
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
  ll k,n;cin>>n>>k;
  ll div=k/(n-1);
  ll excedent=k%(n-1);
  ll ans= n*div+excedent;
   if(excedent==0) ans--;
  cout<<ans<<endl;
  
 }
}
