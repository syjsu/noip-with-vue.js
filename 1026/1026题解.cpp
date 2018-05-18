#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int a[20];
int main()
{
    double max,min,x=0;
    double y;
    for(int i=1;i<=10;i++)
    {cin>>a[i];}
    max=a[1];
    for(int k=1;k<=10;k++)
    {if(a[k]>max) max=a[k];}
    min=a[1];
    for(int m=1;m<=10;m++)
    {if(a[m]<min) min=a[m];}
    for(int z=1;z<=10;z++)
    x+=a[z];
    y=(x-(min+max))/8;
    printf("%6.3f",y);
    return 0;
}
