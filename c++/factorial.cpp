#include <iostream>
#include <vector>
using namespace std;
vector<unsigned long long> dp(10000,-1);
unsigned long long factorial(int n){
	if(dp[n]!=-1){
		return dp[n];
	}
	if(n<=1){
		return n;
	}else{
		unsigned long long ans=factorial(n-1)*n;
		dp[n]=ans;
		return ans;
	}

}

int main(){
	int t,n;cin>>t;
	for (int i = 0; i < t ; ++i){
		cin>>n;
		cout<<factorial(n)<<endl;
	}
	
}