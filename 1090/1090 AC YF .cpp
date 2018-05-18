#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct car
{
   string num,name;
   double pl,weigh;
   int typ,hao;
}   a[101];
int main()
{
	 int n,i,j,y,k,d,op;
	 int s=0;
	 string w;
	 double r;
	 cin>>n;
	 for (int i=1;i<=n;i++)
	  {
	   cin>>a[i].num>>a[i].pl>>a[i].weigh>>a[i].typ>>a[i].name;
	   a[i].hao=i;
	  }
	 cin>>d;
	 for (int j=1;j<=d;j++)
	{
	cin>>op;
    switch (op)
	 {
	 case 1:
	   cin>>y;
	   cout<<a[y].num<<endl;break;
	 case 2:
	   cin>>w;
	   for (i=1;i<=n;i++)
	   if (a[i].num==w)
	   cout<<a[i].name<<endl;break;
	 case 3:
	   cin>>k;
	   for (i=1;i<=n;i++)
	   {
	    r=a[i].pl/a[i].weigh;
	    if (r>=k) s+=1;
	   }
	   cout<<s<<endl;break;
	 }	
	 s=0;
    }
}

