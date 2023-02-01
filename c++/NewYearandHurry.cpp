//https://codeforces.com/problemset/problem/750/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,x;
	int mk=240;
	int total=0;
	cin>>n>>k;
	for(int i=1;i<n+1;i++){
		x=i*5;
		//cout<<x<<k<<total<<endl;
		if(mk<k+x){
			total=i-1;
			break;
		}else{
			k+=x;
			total=i;
		}
	}
cout<<total;	
}
