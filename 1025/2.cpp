#include<iostream>
using namespace std;
int main()
{ int n,jin,yin,tong,zong;
  int a[17][3];
  cin>>n;
  for(int i=0;i<n;i++)
   {
    for(int j=0;j<3;j++)
      cin>>a[i][j];
   }
   jin=0;
   for(int i=0;i<n;i++) jin=jin+a[i][0];
   yin=0;
   for(int i=0;i<n;i++) yin=yin+a[i][1];
   tong=0;
   for(int i=0;i<n;i++) tong=tong+a[i][2];
   zong=jin+yin+tong;
   cout<<jin<<" "<<yin<<" "<<tong<<" "<<zong;
}
