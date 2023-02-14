//https://codeforces.com/problemset/problem/268/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int con(0);
	vector<int> home(t),guest(t);
	for(int i=0;i<t;i++){
		cin>>home[i]>>guest[i];
		for(int j=0;j<i;++j){
			if(home[i]==guest[j]){con+=1;}
			if(guest[i]==home[j]){con+=1;}
		}
	}
	cout<<con;
	return 0;
}


