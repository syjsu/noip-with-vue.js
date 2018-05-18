#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int max=INT_MIN,min=INT_MAX,n,i,a;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	   cin>>a;
   	   if(a>max) max=a;
   	   if(a<min) min=a;
   }
   cout<<max-min;
   return 0;
}

