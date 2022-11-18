#include <iostream>
using namespace std;
void factorizacion(int n){
	int num=n;
	int i=2;
	if(num<2)cout<<"other number please"<<endl;
	else{

		while(num!=1){
			if(num%i==0){
				cout<<num<<"\t"<<i<<endl;
				num/=i;
				i=1;
			}
			i++;
		}
	}	
}
int main(){
	int t,n;cin>>t;
	for (int i = 0; i < t ; ++i){
		cin>>n;
		factorizacion(n);
	}
}