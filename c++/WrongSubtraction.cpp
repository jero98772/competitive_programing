//https://codeforces.com/problemset/problem/977/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n;cin>>k;
	for(int i=0;i<k;i++){
		if(n%10==0){
			n=(int)n/10;
		}else{
			n--;	
		}
	}
	cout<<n<<endl;
}