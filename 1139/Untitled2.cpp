#include<bits/stdc++.h>
using namespace std;
const int MAXN=10010;
int a[MAXN],b[MAXN],c[MAXN],ans[MAXN],lena,lenb,lenans;
void read(int *a,int &len)
{
	string cur;
	cin>>cur;
	len=cur.length();
	for(int i=0;i<len;i++)
		a[i]=cur[i]-48;
	reverse(a,a+len);
}
int main()
{
	read(a,lena);
	read(b,lenb);
	lenans=max(lena,lenb);
	for(int i=0;i<lenans;i++)
	{
		ans[i]=a[i]-b[i]-c[i];
		if(ans[i]<0)	c[i+1]++,ans[i]+=10;
	}
	while(lenans>1&&ans[lenans-1]==0)	lenans--;
	for(int i=lenans-1;i>=0;i--)	cout<<ans[i];
	return 0;
}
