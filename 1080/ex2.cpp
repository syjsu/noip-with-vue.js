#include<iostream>  
#include<cstdio>  
#include<cstdlib>  
#include<string>  
using namespace std;  
int hash[26],maxn;  
int main()  
{  
  char ans[26][801];  
  char s;  
  int i,j;  
  for(i=0;i<26;i++)  
   for(j=0;j<801;j++)  
    ans[i][j]=' ';  
  for(i=1;i<=4;i++)  
  while((s=getchar())!='\n')  
  {  
    if(s>='A' && s<='Z')   
    hash[s-65]++;  
  }  
 for(i=0;i<26;i++)  
  if(maxn<hash[i])  
   maxn=hash[i];  
 for(i=0;i<26;i++)  
   ans[0][i]=65+i;  
 for(i=0;i<26;i++)  
 {  
    for(j=1;j<=hash[i];j++)  
     {  
       ans[j][i]='*';  
     }    
  }  
  for(j=maxn;j>=0;j--)  
  {  
   for(i=0;i<26;i++)  
   {
    cout<<ans[j][i];
	if(i!=25) cout<<" ";  
   }
   if(j!=0) cout<<"\n";   
  }  
  return 0;  
}
