#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
int f[10005];
using namespace std;
int main ()
{
	f[1]=1;
	f[2]=2;
	f[3]=3;
	int a,b,c,d,e,g,h;
	scanf("%d",&a);
	if(a<=3)
	{
		printf("%d",f[a]);
		return 0;
		}
	for(b=4;b<=a;b++)
	{
		f[b]=f[b-1]+f[b-2];
		}
	printf("%d",f[b-1]);
		return 0;
	}