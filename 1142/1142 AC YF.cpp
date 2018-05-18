#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	bool p=true;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
	 cin>>m;
	 if (m==1)
	 cout<<"no";
	 else if (m!=1)
	 {
	  for (int j=2;j<=floor(sqrt(m));j++)
	   {
	     if (m%j==0)
	       p=false;
	   }
	  if (p==false)
	   cout<<"no"<<endl;
	  else 
	   cout<<"yes"<<endl;
	 }
	 p=true;
    }
}
