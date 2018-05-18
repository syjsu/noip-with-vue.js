#include<cstdio>
int a[105][105];
int b[105][105];
int m,n;
void shun(int x)
{
	int t;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	b[i][j]=a[j][n-i];
	t=m;
	m=n;
	n=t;
	return;
}
void ni(int x)
{
	int t;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	b[j][n-i]=a[i][j];
	t=m;
	m=n;
	n=t;
	return;
}
void zuo(int x)
{
	int t;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	b[i][j]=a[m-i][j];
	return;
}
//SAVE// 
int main()
{
	int i,j;
	scanf("%d%d",m,n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",a[i][j]);
	return 0;
}
