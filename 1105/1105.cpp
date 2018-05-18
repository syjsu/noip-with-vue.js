#include<bits/stdc++.h>
using namespace std;
int n,num[5002],m,a,b; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>num[i];
	cin>>m;
	for(int q=1,i;q<=m;q++)
	{
		cin>>a>>b;
		if(a)
		{
			for(i=1;i<=n;i++)
				if(num[i]!=b)cout<<num[i]<<" ";
			cout<<endl;
		}
		else
		{
			for(i=1;i<=n;i++)
				if(num[i]==b)break;
			for(;i<n;i++)
				num[i]=num[i+1];
			num[n]=b;
		}
	}
	return 0;
}


