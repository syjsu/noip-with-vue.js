#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char a1[1000],b1[1000];
    int n,a[1000],b[1000],c[1000],la,lb,lc,temp;
    cin>>n;
    for (int j=1;j<=n;j++)
    {
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		scanf("%s%s",a1,b1);
		la=strlen(a1);
		lb=strlen(b1);
		for (int i=0;i<la;i++)
			a[la-i]=a1[i]-'0';
		for (int i=0;i<lb;i++)
			b[lb-i]=b1[i]-'0';
		lc=1;
		temp=0;
		while (lc<=la || lc<=lb)
		{
			c[lc]=a[lc]+b[lc]+temp;
			temp=c[lc]/10;
			c[lc]%=10;
			lc++;
		}
		c[lc]=temp;
		if (c[lc]==0)
			lc--;
		for (int i=lc;i>=1;i--)
			cout<<c[i];
		cout<<endl;
	}
}
