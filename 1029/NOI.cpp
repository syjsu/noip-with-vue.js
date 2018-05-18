#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    char s[136],c;
    int i;
    gets(s);
    for(i=0;i<=strlen(s)-1;i++)
    {
    	int a;
    	a=s[i];
    	if(a>=65&&a<=90)
    	{
    		a-=64;
    		a+=3;
    		a%=26;
    		a+=64;
    		c=a;
    		cout<<c;
    	}
    	else
    	if(a>=97&&a<=122)
    	{
    		a-=96;
    		a+=3;
    		a%=26;
    		a+=96;
    		c=a;
    		cout<<c;
    	}    	
    	else
		cout<<s[i];
    }
	return 0;
}
