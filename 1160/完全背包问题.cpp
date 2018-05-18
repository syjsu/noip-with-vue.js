/*
	Writer:  ShiXiang
	Date: 12/04/17 22:07
	Description: 完全背包问题 
*/
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n,v[101],w[101],V,f[1001];//v[i]表示第i件物品的重量，w[i]表示价格

int main(){
    scanf("%d%d",&V,&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&v[i],&w[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            if(j>v[i])
               f[j]=max(f[j],f[j-v[i]]+w[i]);
        }
    }
    printf("%d",f[V]);
    return 0;
}
