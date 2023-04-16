//acepted
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
int main(){
	int n,k,x,m;cin>>n>>k>>x;
	float i=0,n2=n;
	vector<int> v;
	vector<int> v2;
	while(n--){
		cin>>m;
		v.push_back(m);
		i+=m;
	}
	sort(v.begin(),v.end());
	v2=v;
	float mean=i/n2;
	float cont=0;
	float dif=abs(x-mean);
	while(cont<k){
		//cout<<mean<<el;
		//cout<<dif<<el;
		if(mean>x){
			i-=v[v.size()-1];
			//cout<<"del"<<v[v.size()-1]<<el;
			v.pop_back();
			if(v.size()==0) mean=0;
			else mean=i/v.size();
			dif = min(abs(x-mean),dif);
		}else if(mean<x){
			i-=v[0];
			//cout<<"del"<<v[0]<<el;
    		v.erase(v.begin());
			if(v.size()==0) mean=0;
			else mean=i/v.size();
			dif = min(abs(x-mean),dif);
		}
		cont++;
	}
	cout <<fixed << setprecision(4) << dif << el;
}
