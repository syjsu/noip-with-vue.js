#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct AA
{
int fs,xs;	
} ;
AA w[10005];
int n,k,i,o=0;

bool cmp(AA x,AA y)
{
	if(x.fs!=y.fs)
	return x.fs>y.fs;
	o++;
	return x.xs<y.xs;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d%d",&w[i].xs,&w[i].fs);
	k=(int)k*1.5;
	sort(w+1,w+n+1,cmp);
	for(i=1;w[i].fs>=w[k].fs;i++);
	printf("%d %d\n",w[k].fs,i-1);
	for(i=1;w[i].fs>=w[k].fs;i++)
	printf("%d %d\n",w[i].xs,w[i].fs);
	
	
	return 0;
}

