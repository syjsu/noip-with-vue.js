#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int r;
int a[1005][1005];
int b[1005][1005]={0};
int main(){
	scanf("%d",&r);
	for(int i=1;i<=r;i++)
	for(int j=1;j<=i;j++) scanf("%d",&a[i][j]);
    for(int i=r;i>=1;i--)
    for(int j=1;j<=r;j++)
    	b[i][j]=max(a[i][j]+b[i+1][j],a[i][j]+b[i+1][j+1]);
	printf("%d",b[1][1]);
	return 0;
}
