#include<iostream>
#include<cstdio>
using namespace std;
int n;
long long sum=1;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum*=2;
    printf("%d",sum);
    return 0;
}

