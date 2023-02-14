//pased
//https://codeforces.com/problemset/problem/509/A
#include <bits/stdc++.h>
#define ll int
#define mem(v, val) memset(v, (val), sizeof(v))
using namespace std;
//int tp[11][11]={1};
int main(){
	unsigned short n;cin>>n;
	vector<vector<unsigned short>> tp(n,vector<unsigned short>(n,1));
	//int tp[n][n]={1};
	//int *tp = (int*)calloc(n, sizeof(int));    // arr = [0, 0, 0, 0, 0]
	//memset(tp, (1), sizeof(tp));
	//memset(tp, (1), sizeof(tp));
	//mem(tp,1);
	//fill_n(tp, n*n, 1);
	//cout<<tp[0][0]<<endl;
	for(int i=1;i<n;i++){
		for(int j=1;j-1<n;j++){
			tp[i][j]=tp[i-1][j]+tp[i][j-1];
			//cout<<i<<endl<<tp[i][j]<<endl;
		}
	}cout<<tp[n-1][n-1]<<endl;
}