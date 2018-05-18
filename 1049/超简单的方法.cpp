#include <iostream>
using namespace std; 
int a[101][101];
int main(){
	int m,n;
	cin>>m>>n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			cin>>a[i][j];
	for (int j=0;j<n;j++){
		for (int i=m-1;i>=0;i--)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
