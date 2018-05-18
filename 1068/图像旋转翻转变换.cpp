#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int N=110;
int n,m,n1,m1,a[N][N],b[N][N],flag,c[2][2],d[2][2];
string s;
void input(void)
{
	cin>>m>>n;
	m1=m,n1=n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	cin>>s;
}
void f(char a)
{
	d[0][0]=-c[0][0];
	d[0][1]=m+1-c[0][1];
	d[1][0]=-c[1][0];
	d[1][1]=n+1-c[1][1];
	switch(a)
	{
		case 'A':
			flag=1-flag;
			c[0][0]=c[1][0];
			c[0][1]=c[1][1];
			c[1][0]=d[0][0];
			c[1][1]=d[0][1];
			break;
		case 'B':
			flag=1-flag;
			c[1][0]=c[0][0];
			c[1][1]=c[0][1];
			c[0][0]=d[1][0];
			c[0][1]=d[1][1];
			break;
		case 'C':
			c[1][0]=d[1][0];
			c[1][1]=d[1][1];
			break;
		case 'D':
			c[0][0]=d[0][0];
			c[0][1]=d[0][1];
			break;
	}
}
void work(void)
{
	flag=0;
	c[0][0]=c[1][0]=1;
	c[0][1]=c[1][1]=0;
	for(int k=0;k<s.length();k++)
	{
		f(s[k]);
		if(s[k]=='A'||s[k]=='B')
		swap(m,n);
	}
	for(int i=1;i<=m1;i++)
	for(int j=1;j<=n1;j++)
	{
		int t[2]={i,j};
		int x1=c[0][0]*t[flag]+c[0][1];
		int y1=c[1][0]*t[1-flag]+c[1][1];
		b[x1][y1]=a[i][j];
	}
}
void output(void)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<b[i][j]<<' ';
		cout<<endl;
	}
}
int main(void)
{
	input();
	work();
	output();
	return 0;
}
