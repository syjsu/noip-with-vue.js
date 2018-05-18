#include<bits/stdc++.h>
using namespace std;
int n,m,k=1; 
int main()
{
	cin>>n>>m;
	int num[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>num[i][j];
	for(int i=0,j=0,d=0;;d++)
	{
		if(num[i][j]==0)break;
		if(d%m==0 && d)cout<<endl;
		cout<<num[i][j]<<" ";
		num[i][j]=0;
		if(k==1)
		{
			if(j+1<m && num[i][j+1]!=0)
			{
				j++;
				continue;
			}
			else 
			{
				k=2;i++;
				continue;
			}
		}	
		if(k==2)
		{
			if(i+1<n && num[i+1][j]!=0)
			{
				i++;
				continue;
			}
			else 
			{
				k=3;j--;
				continue;
			}
		}
		if(k==3)
		{
			if(j-1>=0 && num[i][j-1]!=0)
			{
				j--;
				continue;
			}
			else 
			{
				k=4;i--;
				continue;
			}
		}
		if(k==4)
		{
			if(i-1>=0 && num[i-1][j]!=0)
			{
				i--;
				continue;
			}
			else 
			{
				k=1;j++;
				continue;
			}
		}	
	} 
	return 0;
}


