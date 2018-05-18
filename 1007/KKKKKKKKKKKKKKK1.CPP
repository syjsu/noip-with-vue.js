#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n,s=1,m=1989,i=1;
    for(s=(s*1989)%1000,n=i+1;1;i++)
    {
        for(m=(m*1989)%1000;s!=m;)
        {
           m=(m*1989)%1000;
           n++;
            if(s==m)
        {
           printf ("%d %d",i,n);
           system("pause");
           return 0;
        }
        }
        if(s==m)
        {
           printf("%d %d",i,n);
           system("pause");
           return 0;
        }
    }
    system("pause");
    return 0;
}   
