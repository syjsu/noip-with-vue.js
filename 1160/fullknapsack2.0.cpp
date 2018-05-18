#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int m,n,w[10001],c[10001],f[10001];
int main()
{
    cin>>m>>n;              //m为背包容积，n为物品数量 
    for (int i=1;i<=n;i++)  
    cin>>w[i]>>c[i];        //w[i]为第i件物品的重量，c[i]为第i件物品的价值 
    for (int i=1;i<=n;i++)  
    for (int j=w[i];j<=m;j++)
    f[j]=max(f[j],f[j-w[i]]+c[i]);
    cout<<f[m];
    return 0;
}
