#include <cstdio>
int n,x,tmp,ans,array[101],sweet[2][5]={5,0,10,7,1,0,0,1,0,-2};
int main () {
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
		scanf ("%d",&array[i]);
	for (int i=0;i<n;i++) {
		if (array[i]==1)
			continue;
		tmp+=(sweet[0][array[i]]+x);
		x=sweet[1][array[i]];
		if (tmp>ans)
			ans=tmp;
		if (tmp<0||(x==-2&&tmp<2)) {
			tmp=0;
			x=0;
		}
	}
	printf ("%d\n",ans);
	return 0;
}
