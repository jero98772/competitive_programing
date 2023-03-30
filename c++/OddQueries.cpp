//https://codeforces.com/contest/1807/problem/D
//pased
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int >v(n);
    vector<ll> pref(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i == 0)pref[i] = 1LL*v[i];
        else pref[i] = pref[i-1] + 1LL*v[i];
        sum+=1LL*v[i];
    }
 
    for(int i=0;i<q;i++){
        int l,r,k;
        cin>>l>>r>>k;
        l--,r--;
        ll curr = (l == 0)?pref[r]:pref[r]-pref[l-1];
        curr = sum - curr;
        curr+= 1LL*(r-l+1) * k;
        if(curr & 1){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
 
}
int main()
{
  
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}