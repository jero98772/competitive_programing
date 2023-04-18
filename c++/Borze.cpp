//acepted
//https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	string x;cin>>x;
	bool end=false;
	int token=0;
	for(int i=0;i<x.length();i++){
		if(x[i]=='.'){
			cout<<0;
			
			//end=false;
		}else if(x[i]=='-'&&x[i+1]=='.'){
			cout<<1;
			i++;
			//token++;
			//if(i==x.length()-1) end=true;
		}else if(x[i]=='-'&&x[i+1]=='-'){
			cout<<2;
			i++;
			//token++;
			//if(i==x.length()-1) end=true;
		}

	}
		//if(end) 

}
