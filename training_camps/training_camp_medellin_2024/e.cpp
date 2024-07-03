#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;

int main(){
	int c;cin>>c;
	int max=0;
	int larry[c];
	int tmp;
	int total=0;
	for(int i=0;i<c;i++){
		cin>>tmp;
		if (tmp>max){
			max=tmp;
		}
		larry[i]=tmp;
	}
	for(int i=0;i<c;i++){
		total+=max-larry[i];
	}
	cout<<total;
}