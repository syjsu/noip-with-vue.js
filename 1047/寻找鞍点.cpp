#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[6][6],i,j,s,l,n; //前列（小），后行 （大） 
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][1]<=a[i][j]&&a[i][2]<=a[i][j]&&a[i][3]<=a[i][j]&&a[i][4]<=a[i][j]&&a[i][5]<=a[i][j]&&a[1][j]>=a[i][j]&&a[2][j]>=a[i][j]&&a[3][j]>=a[i][j]&&a[4][j]>=a[i][j]&&a[5][j]>=a[i][j])
            {
            	cout<<i<<' '<<j<<' '<<a[i][j];
				return 0;		
			}		
		}	
	}
	cout<<"not found";
	return 0;
}

