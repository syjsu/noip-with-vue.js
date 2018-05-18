#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<cstring>
#include<string>
using namespace std;
char f[100000];
string s;
int num[100000];
int l,m,t;
int main()
{
	getline(cin,s);
	l=s.length()-1;
	while(m<=l)
	{
		if(s[m]=='+'||s[m]=='-')
		{
			t++;
			f[t]=s[m];
			m=m+2;
		}
		else
		if(s[m]>='0'&&s[m]<='9')
		{
		    cout<<s[m]<<" ";
		    num[t]++;
		    m=m+2;
		}
		while (num[t]==2)
		{
			num[t]=0;
			cout<<f[t]<<" ";
			t--;
			num[t]++;
		}
	}
    return 0;
}
