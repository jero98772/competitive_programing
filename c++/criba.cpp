#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;cin>>n;
	bool criba[n+10]={true};
	vector<int> cribanum;
	criba[0]=false;
	criba[1]=false;

	for(int j=2;j<n;j++){
		criba[j]=true;
	}
	for(int i=2;i<n;i++){
		if(criba[i] && i*i<=n){
			for(int ii=i*i;ii<=n;ii+=i){
				criba[ii]=false;
			}
		}
	}
	for(int k=0;k<sizeof(criba);k++){
		if(criba[k]){
			cribanum.push_back(k);
		}	
	}		
	for(int iii:cribanum){
		cout<<iii<<endl;
	}		
}