#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;



int main(){
	int i,j,k;
	int a[100][100],m,n;
	
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++){
		for(j=n-1;j>=0;j--)
		cout<<a[j][i]<<" ";
		cout<<endl;
	}
	return 0;
}
