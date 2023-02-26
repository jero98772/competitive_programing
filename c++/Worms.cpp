//https://codeforces.com/profile/jero98772
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t,s(0);
	cin>>n;
	int counts[n];
	for(int i=0;i<n;i++){
		cin>>t;
		s+=t;
		counts[i]=s;
	}
    int ind(0), worms[s + 1];

    for (int i = 1; i <= s; i++)
    {
        if (i > counts[ind])
            ind++;
        worms[i] = ind + 1;
    }
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		cout<<worms[t]<<endl;
	}
	return 0;
}