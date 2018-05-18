#include<cstdio>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int n,a[1001][1001],f[1001][1001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
		f[n-1][i]=a[n-1][i];
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++)
		   f[i][j]=max(f[i+1][j],f[i+1][j+1])+a[i][j];
	printf("%d\n",f[0][0]);
	return 0;
}
