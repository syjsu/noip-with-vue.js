#include<cstdio>
using namespace std;
int main()
{
	int a[25]={0},i,l=0,z;
	for(i=0;i<25;i++)scanf("%d",&a[i]);
	for(i=0;i<25;i++)l=l+a[i];
	z=(1+2+3+4+5+6+7+8+9+10+11+12+13)*2-l;	 
	printf("%d",z);
	return 0;
}
