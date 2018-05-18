#include <stdlib.h>
#include <iostream>
using namespace std;
int compare(const void *a,const void *b)
{   
    int *pa=(int*)a,*pb=(int*)b; 
    return *pa-*pb;
}

int main()
{   int a;
    cin>>a;
    int b[a+1];
    for(int i=1;i<=a;i++)
    {cin>>b[i];}
    qsort(&b[1],a,sizeof(int),compare);
    for(int i=1;i<=a;i++)
    {cout<<b[i]<<" ";}
    return 0;
}
