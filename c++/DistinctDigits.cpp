//pased
//https://codeforces.com/problemset/problem/1228/A
#include <bits/stdc++.h>
using namespace std;

int main(){
        int l,r;cin>>l>>r;
	//int d=digs(l);
	bool a=true;
	int d,n,cont,digs;
	while(l<=r){
		digs=0;
		cont=0;
		vector vec(10,-1);
		int n=l;
		//cout<<l<<n;
		while(n>0){
			d=n%10;
			n=n/10;
			digs++;
			//cout<<cont<<digs<<vec[d]<<endl;
			if(vec[d]==-1){
				vec[d]=1;
				cont++;
			}else{
				break;
			}
		}
		//cout<<l<<endl;
		if(cont==digs){
			cout<<l;
			a=false;
			break;
			return 0;
		}
		l++;
	}
	if(a){
		cout<<"-1";
	}
}
