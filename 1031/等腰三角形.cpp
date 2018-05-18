#include<iostream>
using namespace std;
int a,i,j,k,l;
int main()
{
    cin >>a;
    k=1;
    l=(a*2-1)/2;
    for (i=0;i<a;i++)
    {
        for (j=1;j<=l;j++)
         cout <<' ';
        l--;
        for (j=1;j<=k;j++)
         cout <<'*';
        k+=2;
        cout <<endl;
    }
}
    
