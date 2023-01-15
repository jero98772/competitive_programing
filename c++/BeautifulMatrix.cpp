#include <bits/stdc++.h>
using namespace std;
int main(){
	int ipos,iipos,one;
	for(int i=0;i<5;i++){
		for(int ii=0;ii<5;ii++){
			cin>>one;
			if (1==one){
				ipos=i;
				iipos=ii;
				break;break;
			}	
		}
	}
	int sum=abs(ipos-2)+abs(iipos-2);
	cout<<sum<<endl;
}