//https://codeforces.com/problemset/problem/271/A
//pased
#include <bits/stdc++.h>
using namespace std;
int dig(int n,int d){
	int ds=pow(10,d-1);
	return (n/ds)%10;
	
}
bool dif(int d1,int d2,int d3,int d4){
	//cout<<(d1=!d2)<<endl;
	//cout<<(d1!=d3)<<endl;
	//cout<<(d1!=d4)<<endl;
	if(d1!=d2 && d1!=d3 && d1!=d4){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;cin>>n;
	int d1,d2,d3,d4;
	do{
		n++;
		d1=dig(n,4);
		d2=dig(n,3);
		d3=dig(n,2);
		d4=dig(n,1);
                //cout<<d1<<d2<<d3<<d4<<endl;
		//cout<<dif(d3,d1,d2,d4);
		//cout<<dif(d1,d2,d3,d4)<<" "<<dif(d1,d1,d3,d4)<<" "<<dif(d3,d1,d2,d4)<<" "<<dif(d4,d1,d2,d3)<<endl;
		//cout<<(dif(d1,d2,d3,d4) && dif(d1,d1,d3,d4) && dif(d3,d1,d2,d4) && dif(d4,d1,d2,d3))<<endl;
	}while(!(dif(d1,d2,d3,d4) && dif(d2,d1,d3,d4) && dif(d3,d1,d2,d4) && dif(d4,d1,d2,d3)));
	cout<<n;
}
