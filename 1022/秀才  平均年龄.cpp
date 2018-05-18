#include<bits/stdc++.h>
using namespace  std;
int a[10001];
int main()
{
   double s=0,AV;
   int n,i;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	   cin>>a[i];
   	   s+=a[i];
   }
   AV=s/n;
   cout<<fixed<<setprecision(2)<<AV<<endl;
   return 0;
}

