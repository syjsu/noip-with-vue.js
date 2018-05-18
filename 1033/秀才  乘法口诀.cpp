#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int n,i,j,k;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       k=1;
   	   for(j=1;j<=i;j++)
   	   {
   	   	  if(j!=1) cout<<" "<<k<<"*"<<i<<"="<<k*i;
   	   	  else cout<<k<<"*"<<i<<"="<<k*i;
   	   	  k++;
   	   }
   	   cout<<endl;
   }
   return 0;
}

