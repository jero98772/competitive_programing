//pased
//https://codeforces.com/contest/1791/problem/D
#include <bits/stdc++.h>
using namespace std;
#define mem(v, val) memset(v, (val), sizeof(v))
void solve(){
    int n;
    cin >> n;
    string s; 
    cin >> s;
    int v[26];
    mem(v, 0);
    vector<int> suf(n), pref(n);
    pref[0] = 1;
    v[s[0]-'a'] = 1;
    for(int i=1; i< (int)n; i++){
        if(!v[s[i]-'a']){
            pref[i] = pref[i-1]+1;
            v[s[i]-'a'] = 1;
        }
        else pref[i] = pref[i-1];
    }
    mem(v, 0);
    suf[n-1] = 1;
    v[s[n-1]-'a'] = 1;
    for(int i=n-2; i>=0; i--){
     if(!v[s[i]-'a']){
            suf[i] = suf[i+1]+1;
            v[s[i]-'a'] = 1;
        }
        else suf[i] = suf[i+1];
    }
    int ans = 0;
    for(int i=0; i< (int)n-1; i++){
        ans = max(ans, pref[i]+suf[i+1]);
    }
    cout << ans << endl;
}
 
int main(){

    int t;cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}