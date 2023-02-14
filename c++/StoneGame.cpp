//https://codeforces.com/problemset/problem/1538/A
//pased
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int minEle = n+10;
        int maxEle = 0;	
        int minPos = -1;
        int maxPos = -1;
  
       for (int i = 0; i < n; ++i) {
            cin>>ar[i];
            if (minEle>ar[i]){
                minEle = ar[i];
                minPos = i;
            }
            if (maxEle<ar[i]){
                maxEle = ar[i];
                maxPos = i;
            }        
	}
        int mini = min(minPos,maxPos);
        int maxi = max(maxPos,minPos);
	//pos mas cecana 
        cout<<min(maxi+1,min(mini+n+1-maxi,n-mini))<<"\n";
    }
}