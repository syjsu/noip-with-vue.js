#include<iostream>
using namespace std;
int n,k,a1,a2,a3;
bool hadprint;
int main()
{
 cin>>n;
 for(int i=1; i<=n; i++)
 {
  cin>>k;
  hadprint=false;
  if(k==1) cout<<"1"<<endl;
  if(k==2) cout<<"2"<<endl;
  if((k==1)||(k==2)) hadprint=true;
  a1=1; a2=2;
  for(int j=3; j<=k; j++)
  {
   int p=a1;
   int q=a2;
   if(p>=32767) p=p%32767;
   if(q>=32767) q=q%32767;
   a3=2*q+p;
   a1=a2;
   a2=a3;
  }
  if(a2>=32767) a2=a2%32767;
  if(!hadprint) cout<<a2<<endl; 
 }
 return 0;
}
