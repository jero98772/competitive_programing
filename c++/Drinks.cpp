//https://codeforces.com/problemset/problem/200/B
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	float total=0;
	for (int i=0; i<n; i++) {
		float a;
		cin >> a;
		float p = a/100;
		total += p;
	}
	cout <<  (total / n)*100 << endl;
}