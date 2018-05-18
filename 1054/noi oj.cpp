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
int d[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};//方向数组s 
int main()
{
	int m,n;
	char a[101][101];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		char b[101];
		scanf("%s",b);
	    for(int j=0;j<n;j++)
	    	a[i][j]=b[j];
	}
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    	if(a[i][j]=='?')
	    	{
	    		int c=0;
				for(int k=0;k<8;k++)
	    		{
	    			int tx=i+d[k][0];
	    			int ty=j+d[k][1];
	    			if(tx>=0&&tx<m&&ty>=0&&ty<n&&a[tx][ty]=='*')
	    			    c++;
	    		}
	    		printf("%d",c);
	    	}
	    	else printf("*");
	    printf("\n");
	}
	return 0;
}
