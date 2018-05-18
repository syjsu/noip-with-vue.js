#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int m,n,r;
   cin>>m>>n;
   r=m%n;
   while(r!=0)
   {
   	  m=n;
   	  n=r;
   	  r=m%n;
   }
   if(n==1)  cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   return 0;
}

