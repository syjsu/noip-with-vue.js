#include<stdio.h>

int fun(int m,int n)  //m��ƻ������n�������й��м��ַ���
{
    if(m==0||n==1)  //��Ϊ����������m>=n�����ģ�����m-n>=0,������m=0ʱ������������Ϊm=1��
        return 1;    //����ܳ���m-n=0������Ӷ����ܵõ���ȷ��    
    if(n>m)
        return fun(m,m);
    else
        return fun(m,n-1)+fun(m-n,n);
}

int main()
{
    int T,m,n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",fun(m,n));
    }
}
