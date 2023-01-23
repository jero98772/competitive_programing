//https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1
//pased
/*You are required to complete this method*/
void printPat(int n){
for(int k=n;k>=1;k--){
		for(int i=n;i>=1;i--){
			for(int j=k;j>=1;j--){
			cout<<i<<" ";
			}
		}
	cout<<"$";	
	}
//Your code here
}