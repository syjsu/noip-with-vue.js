#include<bits/stdc++.h>
using namespace  std;
int s[10001];
int main()
{
   int i,a,j;
   for(i=1;i<=25;i++)
   {
   	   cin>>a;
   	   for(j=1;j<=13;j++) if(a==j) s[j]++;
   }
   for(i=1;i<=13;i++)
   {
   	   if(s[i]!=2) {cout<<i<<endl;return 0;}
   }
   return 0;
}

