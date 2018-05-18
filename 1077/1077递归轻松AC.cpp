#include<stdio.h>
int a[21],n;
void dfs(int num,int step)
{
  if(step>2 &&num==0)
  {
    for(int i=1;i<=step-1;i++)
    { 
      if(i==1)
        printf("%d",a[i]); 
      else
        printf("+%d",a[i]);           
    }
    printf("\n");
  } 
  for(int i=1;i<=num;i++)
  {
    if(step>=2 && i<a[step-1])continue;
    a[step]=i;
    dfs(num-i,step+1);        
  }  
}
int main()
{
  int n;
  scanf("%d",&n);
  dfs(n,1);
  return 0;    
}
