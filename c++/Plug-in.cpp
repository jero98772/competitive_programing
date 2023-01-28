//https://codeforces.com/group/Ct1cN5bG36/contest/343246/problem/B
//no pased
#include <bits/stdc++.h>
using namespace std;
void remove(string &txt,char c,int n){
	string news="";
	int ns=0;
	for(int i=0;i<txt.length();i++){
		if(c==txt[i] && ns<n){
			ns++;
		}else{
			news.push_back(txt[i]);
		}
	}
	txt=news;
}

int main(){
	string news="";
	string s;cin>>s;
unordered_map<char,int> m;
	for(int i=0;i<s.length();i++){
		if(m.count(s[i])){
			m[s[i]]+=1;
		}else{
			m.insert({s[i],1});
		}
	}
	for (auto x:m){
		if(x.second%2==0){
			remove(s,x.first,x.second);
		}else if(x.second>2){
			remove(s,x.first,x.second-1);
		}
	}
cout<<s<<endl;
	
}
