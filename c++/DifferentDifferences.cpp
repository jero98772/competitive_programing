#include <bits/stdc++.h>
using namespace std;
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
void solve(){
	int e;cin>>e;
	int m;cin>>m;
	int prod=0;
	int vec[e+20];
	//vector<int> vec(e,-1);
	for(int i=e;i>=1;i--){
		vec[e-i]=i;
		prod+=(e-i)*i;
	}
	for(int i=0;i<e;i++){
		cout<<vec[i]<<" ";
	}	
	cout<<endl;
	prod-=((m-2)*(m-1))/2;
	int cont=0;
	for(int t=1;t<=e-2;t++){
		for(int i=0;i<t;i++){
			for(int j=0;j<=i;j++){
				vec[i-j]=vec[i-j]+1;
				cout<<" t:"<<t<<" i:"<<i<<" j:"<<j<<"  "<<vec[j]<<endl;
				if(vec[0]==m || cont>=prod){
					break;break;break;
					return;
				}
				cont++;
			}
		}
	}
	//cout<<vec;
	//reverse(vec.begin(), vec.end());
	for(int i=(my_sizeof(vec)/my_sizeof(vec[0]));i>0;i--){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	/*
	for(int i=0;i<e;i++){
		for(int j=0;j<i;j++){
			vec[j]++;
			if(cont<prod &&<vec[0]==m){
				break;
				break;
				}	
			}
			count++;
		}
	}
	*/
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}
}