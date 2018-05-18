#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath> 
#include <algorithm>
using namespace std;
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(a+b+c)*1/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.4lf",s);
    return 0;
} 
