//https://codeforces.com/problemset/problem/1560/A
//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	
	int i=1,num=0;
	int arr[1005];
	int j=1;
	while(i<=1666){
		//cout<<i<<el;
		if(i%3!=0 && i%10!=3){
			arr[j]=i;
			j++;		
		}
		i++;
	}
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		cout<<arr[x]<<el;
	}	
}
