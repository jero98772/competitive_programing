//https://codeforces.com/problemset/problem/1255/B
//pased
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m,a,i,i1,i2;
	lli sum,diff,m1,m2;
	cin>>t;
	while(t--){
		cin>>n>>m;
		m1=100000;
		m2=m1;
		i1=-1;
		i2=-1;
		sum=0;
		for(i=0;i<n;i++){
			cin>>a;
			sum+=a;
			if(a<=m1){
				m2=m1;
				i2=i2;
				m1=a;
				i1=i+1;
			}
			else if(a<=m2){
				m2=a;
				i2=i+1;			
			}
		}
		if(n==2){
			cout<<-1<<endl;
			continue;
		}else if(m<n){
			cout<<-1<<endl;
			continue;			
		}
		sum=sum*2;
		diff=0;
		if(m>=n){
			diff=m-n;
			sum+=(diff*(m1+m2));
		}
		cout<<sum<<endl;
		for(int i=0;i<n;i++){
			cout<<i+1<<" "<<((i+1)%n)+1<<endl;
		}
		for(int i=0;i<diff;i++){
			cout<<i1<<" "<<i2<<endl;
		}
	}
	return 0;
}