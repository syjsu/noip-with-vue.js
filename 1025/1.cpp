#include<stdio.h>
int main()
{
	int a[18],b[18],c[18];
	int i,n,j,y,t;
	j=y=t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		j+=a[i];
		y+=b[i];
		t+=c[i];
	}
	printf("%d %d %d %d",j,y,t,j+y+t);
	return 0;
}
