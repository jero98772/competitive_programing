//https://codeforces.com/problemset/problem/443/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	
	string txt;getline(cin, txt);//cin.getline(txt);
	int c=0;
	map<char,int> m;
	for(int i=0;i<txt.size();i++){
		if(txt[i]==' ' || txt[i]=='{' || txt[i]=='}' || txt[i]==',' ){
			 continue;
		}
		else{
			if(m.count(txt[i])>=1){
				 continue;
			}else{
			m[txt[i]]=1;
			 c++;
			}
		}
	}	
	cout<<c<<el;
}
