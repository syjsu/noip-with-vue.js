#include<iostream>
using namespace std;
int main()
{
	int t[4][4],j,i,a=0;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>t[i][j];
	for(i=0;i<4;i++)
		a+=t[i][i];
	cout<<a<<" ";
	a=0;
	for(i=0;i<4;i++)
		a+=t[i][3-i];
	cout<<a;		
}
