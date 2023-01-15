//https://codeforces.com/problemset/problem/996/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int counter=0;
	int n;cin>>n;
	int dolars[5]={100, 20, 10, 5, 1};
	while(n>0){
		for(int i=0;i<5;i++){
			if(dolars[i]<=n){
				n=n-dolars[i];
				counter++;
				//cout<<counter<<"  "<<n<<endl;
				break;
			}
		}
	}
	cout<<counter<<endl;
}