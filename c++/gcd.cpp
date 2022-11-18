#include <iostream>
using namespace std;
int gcd(a,b){
	if(b==0){
		return b;	
	}
	else{
		return gcd(a,a % b);
	}
}
int main(){
	int t,a,b;cin>>t;
	for(int i=0;i<t;i++){
		cin>>a;
		cin>>b;
		cout<<gcd(a,b)<<endl;		
	}
}