//https://codeforces.com/gym/103960/problem/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	//string txt;cin>>txt;		
	int c=0;
	int c2=0;
	for(int i=0;i<t;i++){
		char x;cin>>x;
		if(x=='a'){
			c++;
		}

		if(t-1==i || x=='b'){
			if(c>=2){
				c2+=c;
			}
			c=0;
		}
	}
	cout<<c2;
}
