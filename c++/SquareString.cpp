#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){
	string txt;cin>>txt;
	int s=txt.length();
	int mit=s/2;
	bool x=false;	
	if(s%2==1){
		cout<<"NO"<<endl;
		return ;
	}
	for(int i=0;i<mit;i++){
		if(txt[i+mit]!=txt[i]){
			cout<<"NO"<<endl;
			return ;
		}
	}
		cout<<"YES"<<endl;

}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}	
}
