//pased
//https://codeforces.com/contest/1807/problem/E
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
        int n;cin>>n;
        vector<ll> pref(n+1,0);
        vector<int> v(n+1);
        for(int i = 1; i <= n; ++i){
            cin>>v[i];
            pref[i] = pref[i-1] + 1LL*v[i];
        }
        int l = 1,r = n;
        while(true){
            if(l==r){
                cout<<"! "<<l<<"\n";
                cout.flush();
                break;
            }
            int mid = l + (r-l)/2;
            cout<<"? "<<mid-l+1<<" ";
	    for (int i = l; i <= mid; ++i){
                cout<<i<<" ";
            }
            cout<<'\n';
            cout.flush();
            int sum;
            cin>>sum;
            ll curr = (l == 0)?pref[mid]:pref[mid]-pref[l-1];
            // d(curr),d(sum);
            if(curr == sum){
                l = mid+1;
            }else 
                r = mid;
        }
}
int main(){
        int tt;
        tt = 1;
        cin >> tt;
        while (tt--)
            solve();
        return 0;
    }
