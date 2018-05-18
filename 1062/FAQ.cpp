#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=abs(a-c)+abs(b-d);
    printf("%.3lf",e);
    return 0;
}
