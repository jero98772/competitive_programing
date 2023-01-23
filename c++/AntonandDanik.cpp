//https://codeforces.com/problemset/problem/734/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	map<char,int> leters;
	leters['A']=0;
	leters['D']=0;
	int t;cin>>t;
	char c;
	for(int i=0;i<t;i++){
		cin>>c;
		if(c=='A'){
			leters[c]+=1;
		}	
		else if(c=='D'){
			leters[c]+=1;
	
		}
	}
	int a=leters['A'];
	int d=leters['D'];
	if(a>d){
		cout<<"Anton";
	}else if(a<d){
		cout<<"Danik";
	}else if(a==d){
		cout<<"Friendship";
	}
	return 0;
}
