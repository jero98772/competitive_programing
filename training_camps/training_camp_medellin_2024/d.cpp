#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int c;cin>>c;
	string t;cin>>t;
	int count8=0;
	for(char d:t){
		if('8'==d){
			count8++;
		}
	}
	int set11=c/11;
	cout<<min(set11,count8);
}