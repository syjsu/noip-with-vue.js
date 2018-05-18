#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct st
{int chinese;
int math;
int english;
int total;
int xuehao;
}a[301];
int main()
{int n;
cin>>n;
for (int i=0;i<n;i++)
 {cin>>a[i].chinese>>a[i].math>>a[i].english;
 a[i].total=a[i].chinese+a[i].math+a[i].english;
 a[i].xuehao=i+1;}
 for (int i=n-1;i>0;i--)
  for (int j=0;j<i;j++)
   {
   if (a[j].total<a[j+1].total)
    swap(a[j],a[j+1]);
   else 
	if (a[j].total==a[j+1].total)
     {
	 if (a[j].chinese<a[j+1].chinese)
	  swap(a[j],a[j+1]);
     else 
	  if (a[j].chinese==a[j+1].chinese)
       if (a[j].xuehao>a[j+1].xuehao)
      swap(a[j],a[j+1]) ;
  }
     
   }
      for (int i=0;i<5;i++)
      cout<<a[i].xuehao<<" "<<a[i].total<<endl;
}
