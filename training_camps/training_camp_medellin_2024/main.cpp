#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	string t;cin>>t;
	int team1=0;
	int team0=0;
	for(int i=0;i<t.size();i++){
		if(t[i]=='0'){
			team1=0;
			++team0;
			if(team0>=7){
				cout<<"YES";return 0;
			}
		}else{
			team0=0;
			++team1;
			if(team1>=7){
				cout<<"YES";
				return 0;
			}
		}

	}
	cout<<"NO";
}