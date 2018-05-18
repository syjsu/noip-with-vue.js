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
        gets(a[i]);    //记录输入的字符串
    }
    memset(b,0,sizeof(b));
    for (i=0;i<4;i++)
    {
        for (j=0;j<=strlen(a[i])-1;j++)
        {
            if (a[i][j]>='A' &&a[i][j]<='Z')
            {
                t=a[i][j]-'A';
                b[t]++;              //进行字符统计
            }
        }
    }
    for (i=0;i<26;i++)
    {
        if (b[i]>maxn) maxn=b[i];    //记录最高点的值
    }
    for (i=maxn;i>=1;i--)
    {
        for (j=0;j<26;j++)
        {
            if (b[j]>=i) printf("* ");
            else printf("  ");                //打表
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");   //不用循环打
    return 0;
}