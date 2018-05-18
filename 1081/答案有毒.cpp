#include<iostream>
#include<string.h>
using namespace std;
char t[1000],s[5000000],a[5000000];
int main()
{
	int ans=0,k,j=0;
	gets(t);
	gets(s);
	for(k=0;k<(strlen(s)-strlen(t)-1);k++)
	{
		for(int i=k;i<=(k+strlen(t)-1);i++)
		{
			a[i]=s[i];
		}
		for(int i=k;i<=(k+strlen(t)-1);i++)
		{
			for(int i=0;i<strlen(t);i++)
	{
		if(a[i]==t[j])
		{
			j++;
			}
		
		}
		}
		if(j>=(k+strlen(t)-1))
		{
		  ans++;	
		}
		memset(a,0,sizeof(a));
	}
	cout<<ans;
	return 0;
}
