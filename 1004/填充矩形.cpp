#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a;
long long x,y;
long long ans;

int main (){
	scanf("%d%d%d",&n,&m,&a);
	x=n/a;
	y=m/a;
	ans=x*y;
	printf("%ld\n",ans);
	return 0;
}

