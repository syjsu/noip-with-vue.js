#include<bits/stdc++.h>
using namespace std;
int n,r,t;
string name[20002],p;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;cin>>p;
		r++;
		if(!t)
		{
			for(int i=r;i>=2;i--)
				name[i]=name[i-1];
			name[1]=p;
		}
		else
			name[r]=p;
	}
	for(int i=1;i<=n;i++)
		cout<<name[i]<<endl;
	return 0;
}


