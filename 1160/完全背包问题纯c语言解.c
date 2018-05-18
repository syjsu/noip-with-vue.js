#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int n,c[101],w[101],V,f[1001];
int i,j;

int main()
{
	scanf("%d %d",&V,&n);
	for(i=1; i<=n; i++)
	{
		scanf("%d %d",&c[i],&w[i]);
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=0; j<=V; j++)
		{
			//if (i==3 && j==3) {
			//	printf("j:%d w[i]=%d f[j]=%d f[j-c[i]]=%d place=%d\n", j,w[i], f[j],f[j-c[i]] , f[j-c[i]] +w[i] ); 
			//}
			if(j>=c[i])
				f[j]=max(  f[j], f[j-c[i]] +w[i]  );
		}
		//for(j=0; j<=V; j++)
		//	printf("%d ",f[j]);
		//printf("\n");
	}
	printf("%d",f[V]);
	return 0;
}


