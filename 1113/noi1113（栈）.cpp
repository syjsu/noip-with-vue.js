#include<iostream>
#include<cstring>
using namespace std;
string s;
int left_st[105],right_st[105],i,j;
int main()
{
 cin>>s;
 int p=s.size();
 int left_am=0; 
 int right_am=0;
 for(int i=0; i<=p; i++)
 {
  if(s[i]=='(')
  {
   left_am++;
   left_st[left_am]=i;
  }
  if(s[i]==')')
  {
   right_am++;
   right_st[right_am]=i;
  }
 }  
 for(i=1; i<=right_am; i++)
 {
  for(j=left_am; j>=1; j--)
    if(left_st[j]<right_st[i]) break;
  cout<<left_st[j]<<" "<<right_st[i]<<endl;
  left_st[j]=10000000; right_st[i]=10000000;
  //不要用链式思想移位，那样下一次取数时会出错 
 } 
 return 0;
} 
