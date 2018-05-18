
#include<iostream>
#include<stdio.h>
using namespace std;
const int N=10;
bool c[N+1],d[2*N],e[2*N+1];
int n,ans;
void queen(int x)
{
    if(x==n+1){++ans;return;}
    for(int j=1;j<=n;j++)
    {
        if(!c[j]&&!d[x-j+n]&&!e[x+j])
        {
            c[j]=d[x-j+n]=e[x+j]=true;
            queen(x+1);
            c[j]=d[x-j+n]=e[x+j]=false;
        }
    }
}
int main()
{
    scanf("%d",&n);
    queen(1);
    printf("%d",ans);
    return 0;
}
