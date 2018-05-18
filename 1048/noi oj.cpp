#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>
//#include<conio.h>
//#include<windows.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<map>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int n,hj=0,zj=0,x=-1,y=-1;
	int a[101][101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	    	scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		    c+=a[i][j];
		if(c%2==1)
		{
			hj++;
			if(x==-1)x=i;
			if(hj==2){printf("Corrupt");return 0;}
		}
	}
	for(int j=0;j<n;j++)
	{
		int c=0;
		for(int i=0;i<n;i++)
		    c+=a[i][j];
		if(c%2==1)
		{
			zj++;
			if(y==-1)y=j;
			if(zj==2){printf("Corrupt");return 0;}
		}
	}
	if(zj+hj==0)printf("OK");
	else printf("%d %d",x+1,y+1);
	return 0;
}
