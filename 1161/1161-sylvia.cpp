#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define debug(x) cerr<<#x<<'='<<x<<endl
#define LL long long 
#define Maxn 2513

int A[Maxn];
int f[Maxn];
int m,n;

int main (){
	cin>>n>>m;
	memset(f,0,sizeof(f));
	f[0]=0+m;
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		f[i]=f[i-1]+A[i];
	}
	//f[1]=A[1]+m;
	for (int i=2;i<=n;i++){
		for (int j=1;j<=i;j++)
		f[i]=min(f[i],f[j]+f[i-j]+m);
	}
	cout<<f[n]<<endl;
	return 0;
}

