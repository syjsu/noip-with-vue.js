#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int m,n,w[10001],c[10001],f[10001];
int main()
{
    cin>>m>>n;              //mΪ�����ݻ���nΪ��Ʒ���� 
    for (int i=1;i<=n;i++)  
    cin>>w[i]>>c[i];        //w[i]Ϊ��i����Ʒ��������c[i]Ϊ��i����Ʒ�ļ�ֵ 
    for (int i=1;i<=n;i++)  
    for (int j=w[i];j<=m;j++)
    f[j]=max(f[j],f[j-w[i]]+c[i]);
    cout<<f[m];
    return 0;
}
