#include<bits/stdc++.h>
using namespace std;
int num[2002],n,m,q,num_i,num_v; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>num[i];
	cin>>m;
	for(int t=1;t<=m;t++)
	{
		cin>>q;
		switch (q)
		{
			case 1:
				cin>>num_i;
				cout<<num[num_i]<<endl;
				break;
			case 2:
				cin>>num_i>>num_v;
				for(int i=n+1;i>=num_i+1;i--)
					num[i]=num[i-1];
				num[num_i]=num_v;n++;
				break;
			case 3:
				cin>>num_i;
				n--;
				for(int i=num_i;i<=n;i++)
				 	num[i]=num[i+1];
				break;
		}
	} 
	return 0;
}


