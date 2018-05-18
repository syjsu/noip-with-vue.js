#include<iostream>
using namespace std;
int main()
{
  int max,flag;
  int a[5][5];
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++) cin>>a[i][j];
  }
  for(int i=0;i<5;i++)
  {   max=0;
      for(int j=0;j<5;j++)
      {
          if(a[i][j]>a[i][max])
          {
            max=j;
          }
      }
      flag=0;
      for(int j=0;j<5;j++)
          {
            if(a[i][max]>a[j][max])
            {
              flag=1;break;
            }
          }

      if(flag==0) {cout<<i+1<<" "<<max+1<<" "<<a[i][max];break;}
  }
  if(flag==1) cout<<"not found";
}
