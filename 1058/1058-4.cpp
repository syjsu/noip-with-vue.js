#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[201];
	int i;
	for(i=0;i<200;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='.') break;
	}
	int stop,len=0,min=201,start=0;
	stop=i;
	for(i=0;i<=stop;i++)
	{
		if(a[i]==' '||a[i]=='.')
		{
			if(len<min)
			{
				min=len;
				start=i-len;
			}
			len=0;
			
		}
		else len++;
	}
	stop=start+min;
	for(i=start;i<stop;i++)
	    cout<<a[i];
}
