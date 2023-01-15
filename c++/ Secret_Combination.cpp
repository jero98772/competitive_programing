//not pass
#include <bits/stdc++.h>
using namespace std;
int n;
string s,s1,minS;
bool mini(string s1,string s2){
	int check=false;
	for(int i=0;i<n;i++){
		if(s1[i]==s2[i]) continue;
		else if(s1[i]>s2[i]){
			check=true;
			break;
		}
		else{
			check=false;
			break;
		}
	}
	return check;
}
void addOne(){
	int i;
	for(i=0;i<n;i++){
		if(s1[i]=='9')
			s1[i]='0';
		else
			s1[i]++;
	}
}
void rigthShift(){
	s=s.substr(n-1,1)+s.substr(0,n-1);
}
int main(){
	cin>>n;
	cin>>s;
	minS=s;
	for(int i=0;i<n;i++){
		s1=s;
		for(int ii=0;ii<9;ii++){
			addOne();
			if(mini(minS,s1))
				minS=s1;
		}
		rigthShift();
		if(mini(minS,s1))
			minS=s1;
	}
	cout<<minS<<endl;
	return 0;
}
