#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[21]={0},j,k,p=1,c;
	a[1]=1;
	while(a[1]*2<=n)
	{
		c=0;
		for(j=1;j<=p;j++)
		c+=a[j];
		if(n-c>=a[p])
		{
			p++;
			a[p]=a[p-1];
		}
		else
			for(;;)
			{
				if(c==n)
				{
					cout<<a[1];
					if(n>1)
					for(k=2;a[k]!=0;k++)
					cout<<'+'<<a[k];
					cout<<endl;
					p--,a[p]++,a[p+1]=0;
					break;
				}
				else a[p]++,c++;
			}
	}	
}
