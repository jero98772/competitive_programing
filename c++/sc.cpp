//passed
//https://codeforces.com/group/Ct1cN5bG36/contest/340467/problem/F
#include <bits/stdc++.h>
using namespace std;
int n;
string s,s1,minS;
bool mini(string txt1,string txt2){
	int check=false;
	for(int l=0;l<n;l++){
		if(txt1[l]==txt2[l]) continue;
		else if(txt1[l]>txt2[l]){
			check=true;
			break;
		}else{
			check=false;
			break;
		}
	}
	return check;
}
void addOne(){
	for(int k=0;k<n;k++){
		if(s1[k]=='9')
			s1[k]='0';
		else s1[k]++;
	}
}
void rigthShifts(){
	s=s.substr(n-1,1)+s.substr(0,n-1);
}
int main(){
	cin>>n;
	cin>>s;
	minS=s;
	for(int i=0;i<n;i++){
		s1=s;
		for(int j;j<9;j++){
			addOne();
			if(mini(minS,s1)){
				minS=s1;
			}
		}
		rigthShifts();
		if(mini(minS,s))
			minS=s;

	}
	cout<<minS;
}