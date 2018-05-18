#include<bits/stdc++.h>
using namespace  std;
double a[10001];
int main()
{
   double AV;
   int n,i,max=INT_MIN,min=INT_MAX,s=0;
   for(i=1;i<=10;i++)
   {
   	  cin>>a[i];
   	  if(a[i]>max)  max=a[i];
   	  if(a[i]<min)  min=a[i];
   }
   if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==a[6]&&a[6]==a[7]&&a[7]==a[8]&&a[8]==a[9]&&a[9]==a[10]&&a[10]==a[1])
   {
   	   cout<<fixed<<setprecision(3)<<a[1]<<endl;
   	   return 0;
   }
   for(i=1;i<=10;i++)
   {
   	   if(a[i]==max||a[i]==min)
   	   {
   	   	   if(a[i]==max) max=-1;
   	   	   if(a[i]==min) min=-1;
   	   	   continue;
   	   }
   	   s+=a[i];
   }
   AV=s/8.000;
   cout<<fixed<<setprecision(3)<<AV<<endl;
   return 0;
}

