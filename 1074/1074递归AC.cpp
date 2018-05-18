#include<stdio.h>
#include<math.h>
int n;
int mi(int n)
{
  int x;
  for(int i=0;;i++)
  { 
    x=int(pow(2,i));
    if(x>n)return i-1;  
  }
}
void dfs(int n)
{
  if(n==2){printf("2");return;}
  if(n==1){printf("2(0)");return;}
  if(n==0)return;
  int x=mi(n);
  if(x==1)printf("2");
  else {printf("2(");dfs(x);printf(")");}
  if(n-int(pow(2,x))==0)return;
  printf("+");
  dfs(n-int(pow(2,x)));       
      
}
int main()
{
  scanf("%d",&n);
  dfs(n);    
  return 0;
}
