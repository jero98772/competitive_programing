//passed
//https://codeforces.com/group/Ct1cN5bG36/contest/340467/problem/H
#include <bits/stdc++.h>
    using namespace std;
    void solution(){
    	int s;cin>>s;
    	int n=1;
    	int total=0;
    	while (s>0){
    		s-=n;
    		n+=2;
    		total++;
    	}
    	cout<<total<<endl;
    }
    int main(){
    	int t;cin>>t;
    	for(int i=0;i<t;i++){
    		solution();
    	}
    }