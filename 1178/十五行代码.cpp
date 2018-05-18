#include<cstdio>
#include<cmath>
const int MAXN=21;
int m,n;
long long counter(int pos,int fsize)
{
	if(fsize==m) return pow(m,n-pos+1);
	if(pos==n+1) return 0;
	return fsize*counter(pos+1,fsize)+counter(pos+1,fsize+1);
}
int main()
{
	scanf("%d%d",&n,&m);
	printf("%lld",counter(1,0));
}
