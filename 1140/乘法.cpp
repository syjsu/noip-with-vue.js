#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int a[2003],b[2003],c[2003];
int main()
{
    char ch[2002];
    int flag=0;
    scanf("%s",ch);
    int n=strlen(ch);
    for(int i=2000;i>=2000-n+1;i--)
	{
		a[i+1]=int(ch[i+n-2001])-48;
	}
	scanf("%s",ch);
    int m=strlen(ch);
    for(int i=2000;i>=2000-m+1;i--)
	{
		b[i+1]=int(ch[i+m-2001])-48;
	}
    int time=n>m?2001-n:2001-m;
	for(int i=2001;i>=2002-m;i--)
	{
		for(int j=1;j<=b[i];j++)
		{
        	for(int k=2001;k>=time;k--)
	        {
	        	c[k+i-2001]+=a[k];
    		    if(flag)
    	    	{
	    	    	c[k+i-2001]++;
			        flag=0;
    	    	}
    	    	if(c[k+i-2001]>=10)
	    	    {
		        	c[k+i-2001]-=10;
		        	flag=1;
	    	    }
            }
		}
    }
    flag=0;
	for(int i=1;i<=2001;i++)
	{
		if(c[i]!=0)flag=true;
		if(flag)cout<<c[i];
	}
}

