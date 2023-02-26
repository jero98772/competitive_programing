//https://codeforces.com/problemset/problem/118/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	string txt;cin>>txt;
	string x="";	
	for(int i=0;i<txt.size();i++){
		if(txt[i]=='A' || txt[i]=='E' || txt[i]=='I' || txt[i]=='O'  || txt[i]=='U' || txt[i]=='a' || txt[i]=='e' || txt[i]=='i' || txt[i]=='o'  || txt[i]=='u' || txt[i]=='Y' || txt[i]=='y' ){}
			
		else if(!islower(txt[i])){
			x.push_back('.');
			x.push_back(tolower(txt[i]));
		}
		else{
			x.push_back('.');
			x.push_back(txt[i]);
		}

	}
	cout<<x;
}
