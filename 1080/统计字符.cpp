#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[4][100];
int b[26],t,i,j,maxn=0;
int main()
{
    for (i=0;i<4;i++)
    {
        gets(a[i]);   
    }
    memset(b,0,sizeof(b));
    for (i=0;i<4;i++)
    {
        for (j=0;j<=strlen(a[i])-1;j++)
        {
            if (a[i][j]>='A' &&a[i][j]<='Z')
            {
                t=a[i][j]-'A';
                b[t]++;              
            }
        }
    }
    for (i=0;i<26;i++)
    {
        if (b[i]>maxn) maxn=b[i];    
    }
    for (i=maxn;i>=1;i--)
    {
        for (j=0;j<26;j++)
        {
            if (b[j]>=i) printf("* ");
            else printf("  ");                
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");  
    return 0;
}
