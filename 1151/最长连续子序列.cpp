#include<stdio.h>
int getMax(int a[],int n)
{
    int f=a[0],res=a[0];
    for (int i=1;i<n;i++)
    {
        if(f<0)
         f=a[i];
        else 
         f+=a[i];
        if(f>res)
         res=f;
    }
    return res;
}
int main()
{
  int a[200001],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&a[i]);
  printf("%d",getMax(a,n));
  return 0;
}
