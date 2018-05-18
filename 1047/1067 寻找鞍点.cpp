#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int main()
{
	//freopen("sample.in", "r", stdin);
     //freopen("sample.out", "w", stdout);
	int i,j,k,max,f,t,s=0;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			cin>>a[i][j];
	for(i=1;i<=5;i++)
	{
		f=1;
		t=1;
		max=a[i][1];
		for (j=2;j<=5;j++)
		{
			if(a[i][j]>max) 
			{
				max=a[i][j];
				t=j;
			}
		}
		for (k=1;k<=5;++k)
			if(a[k][t]<max) 
				f=0;
			if(f!=0)
				cout<<i<<" "<<t<<" "<<max; 
			else 
				s++;
	}			
	if(s==5) 
		cout<<"not found";
return 0;
}

