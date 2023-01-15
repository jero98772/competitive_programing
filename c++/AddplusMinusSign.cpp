//Add Plus Minus Sign
//pased
//https://codeforces.com/problemset/problem/1774/A
#include <bits/stdc++.h> 
//#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
using namespace std;
#define toi(ch) ((int)ch);
void solve(){
	int numbers;cin>>numbers;
	string nums;cin>>nums;
	int counter;
	if(counter=nums[0]!='0')counter=1;
	for(int i=1;i<numbers;i++){
		//cout<<counter<<endl;
		if(nums[i]=='0'){
			cout<<"+";
		}else{
			if(!counter){
				counter++;
				cout<<"+";
			}else{
				counter--;
				cout<<"-";
			}
		}
	}
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}