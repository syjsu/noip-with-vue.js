#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int a[21][21],f[21][21],x1,x2,n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
        cin>>x1>>x2;
        a[x1][x2]=-1;
	}
	for(int i=1;i<=n;i++){
		f[n][i]=1;
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(a[i][j]==-1)continue;
			else f[i][j]=f[i+1][j]+f[i+1][j+1];
		}
	}
	cout<<f[1][1];
	return 0;
}
