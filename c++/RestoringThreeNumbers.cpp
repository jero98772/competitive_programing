//https://codeforces.com/problemset/problem/1154/A
//pased
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"
using namespace std;
void solve(){

}
int main(){
	int nums[4];
	for(int i=0;i<4;i++)cin>>nums[i];
	sort(nums,nums+4);
	for(int i=0;i<3;i++)cout<<nums[3]-nums[i]<<" ";
}
