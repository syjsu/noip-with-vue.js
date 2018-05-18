#include<cstdio>
long long a[1000][1000];
long long fun(int n,int m)
{
	if(m==1) return 1;
	if(a[n][m]) return a[n][m];
	long long s=0;
	for(int i=0;i<=n;i++)
		s+=fun(n-i,m-1);
	return a[n][m]=s;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%lld",fun(n,m));
}