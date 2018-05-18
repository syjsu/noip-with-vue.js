#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
} 
