#include<iostream>
#include<cstring>
using namespace std;
char a[101][101];
int fd(int k,int l,int s1)
{
	int i,j,f=0;
for(i=s1-k,j=0;i<s1,j<k;i++,j++)
	if(a[l-1][i]!=a[l][j]) f=1;
			if(f==1) return 0;else return 1;
}
int main()
{
	int n,i,j,l,s1,s2,f;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
		cout<<a[1];
	for(i=2;i<=n;i++)
	{
		s1=strlen(a[i-1]);
		s2=strlen(a[i]);
		f=0;
		
		for(j=s1;j>0;j--)
		if(fd(j,i,s1)==1) {f=j;break;}
		
		for(l=f;l<s2;l++)
		cout<<a[i][l];
		
	}
	return 0;
}