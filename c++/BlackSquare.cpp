//acepted
//https://codeforces.com/problemset/problem/431/A
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	lli a,b,c,d,i,j,ans;
	char s[1000001];
	while(cin>>a>>b>>c>>d){
		cin>>s;
		ans=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='1') ans+=a;
			else if(s[i]=='2') ans+=b;
			else if(s[i]=='3') ans+=c;
			else if(s[i]=='4') ans+=d;		
		}
		cout<<ans<<el;
		break;
	} 
}
