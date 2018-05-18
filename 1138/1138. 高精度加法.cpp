#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005],c[10005];
int main()
{
	int i,jw,la,lb,lc;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	la=s1.size();
	lb=s2.size();
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(i=0;i<la;i++) a[i]=s1[i]-48;
	for(i=0;i<lb;i++) b[i]=s2[i]-48;
	jw=0;
	lc=max(la,lb);
	for(i=0;i<lc;i++)
	{
		c[i]=a[i]+b[i]+jw;
		jw=c[i]/10;
		c[i]=c[i]%10;
	}
	while (jw)
	{
		lc++;
		c[lc-1]=jw%10;
		jw=jw/10;
	}
	while ((c[lc-1]==0)&&(lc>1)) lc--;
	for(i=lc-1;i>=0;i--)
		cout<<c[i];
	cout<<endl;
	return 0;
}

