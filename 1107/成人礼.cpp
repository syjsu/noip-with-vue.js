#include<iostream>
using namespace std;
int main()
{
	string names[40000];
	int n,i,p=20001,q=20001;
	bool direc;
	cin>>n;
	cin>>direc;
	cin>>names[20001];
	for(i=2;i<=n;i++)
	{
		cin>>direc;
		if(direc==0)
		{
			p--;
			cin>>names[p];
		}
		else
		{
			q++;
			cin>>names[q];
		}
	}
	for(i=p;i<=q;i++)
	cout<<names[i]<<endl;
	return 0;
}
