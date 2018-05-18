#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	float sum=m*n,count=0;
	int a[n][m],b[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>b[i][j];
			if(b[i][j]==a[i][j])
				count++;
		}
	printf("%.2f\n",count/sum*100);
}
