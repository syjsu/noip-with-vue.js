#include <cstdio>
using namespace std;
int a[101][101],b[101][101];
int main (){
	double p,k=0.0;
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	scanf("%d",&b[i][j]);
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	if (a[i][j]==b[i][j])k++;
	p=(k/(n*m))*100;
	printf("%.2lf\n",p);
}
