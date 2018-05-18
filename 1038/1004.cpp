#include<iostream>
using namespace std;
int a[26],b[14];
int main()
{
	for(int i=1;i<26;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<26;i++)
	{
		for(int j=1;j<14;j++)
		{
			if(a[i]==j)b[j]++;
		}
	}
	for(int j=1;j<14;j++)
	{
		if(b[j]<2)cout<<j<<endl;;
	}
	return 0;
}
