//https://codeforces.com/gym/104120/problem/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;cin>>x;
	if(15<=(3000/x)){
		cout<<15;
	}else{
		float x2=(float)3000/x;
		int i1 = (int)(x2 + 0.5);
		cout<<ceil(x2);
	}
}
