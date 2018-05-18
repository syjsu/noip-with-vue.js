#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int i;
   string s;
   cin>>s;
   for(i=0;i<=s.size()-1;i++)
   {
   	   if(s[i]>=65&&s[i]<=88)  s[i]=char(s[i]+3);
   	   else if(s[i]>=89&&s[i]<=91)  s[i]=char(s[i]+3-26);
   	        else if(s[i]>=97&&s[i]<=120)  s[i]=char(s[i]+3);
   	             else if(s[i]>=121&&s[i]<=123)  s[i]=char(s[i]+3-26);
   }
   cout<<s<<endl;
   return 0;
}

