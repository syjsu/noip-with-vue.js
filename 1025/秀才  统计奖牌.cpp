#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int n,i,a,b,c,x=0,y=0,z=0,ans;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	   cin>>a>>b>>c;
   	   x+=a;
   	   y+=b;
   	   z+=c;
   }
   ans=x+y+z;
   cout<<x<<" "<<y<<" "<<z<<" "<<ans<<endl;
   return 0;
}

