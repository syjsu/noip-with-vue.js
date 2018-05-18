#include<iostream>
#include<cstdio>
using namespace std;
int a[5][5];

int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cin>>a[i][j];
		}
	}
	printf("%d %d\n",a[1][1]+a[2][2]+a[3][3]+a[4][4],a[1][4]+a[2][3]+a[3][2]+a[4][1]);
	return 0;
}
