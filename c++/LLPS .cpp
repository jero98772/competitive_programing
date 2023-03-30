//https://codeforces.com/problemset/status?my=on
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	string txt;cin>>txt;
	sort(txt.begin(),txt.end());
	char l=txt[txt.size()-1];
	cout<<l;
	string news="";
	int c=0;
	for(int i=0;i<txt.size()-1;i++){
		if(l==txt[i])
			news.push_back(txt[i]);
	}
	cout<<news;
}
