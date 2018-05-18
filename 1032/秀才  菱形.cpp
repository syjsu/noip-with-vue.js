#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int n,i,j,k;
   cin>>n;
   for(i=1;i<=n;i++)
   {
      k=1;
   	  for(j=1;j<=n-i;j++)  cout<<" ";
   	  for(j=1;j<=2*i-1;j++)  {cout<<k;k++;}
      cout<<endl;
   }
   int q=k-3;
   for(i=1;i<=n-1;i++)
   {
   	  k=1;
   	  for(j=1;j<=i;j++)  cout<<" ";
   	  for(j=1;j<=q;j++)  {cout<<k;k++;}
   	  cout<<endl;
   	  q-=2;
   }
   return 0;
}

