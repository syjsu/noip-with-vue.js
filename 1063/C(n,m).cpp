#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long i,j;
    long long a=1,b=1,c=1;
    if(n)
    for(i=1;i<=n;i++)a*=i;
    if(m)
    for(i=1;i<=m;i++)b*=i;
    if(n-m)
    for(i=1;i<=n-m;i++)c*=i;
    cout<<a/b/c;
    return 0;
}
    
