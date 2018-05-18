#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[103][103];
int main()
{
	//freopen("train.in","r",stdin);
	//freopen("train.out","w",stdout);
   int n,sum=1,i=1;
   cin>>n;
   while(i<=n)
   {
   	if(i%2!=0) 
	   	for(int k=i,j=1;k>=1,j<=i;k--,j++)
	  {
	   	a[j][k]=sum;
	   	sum++;
   	  }
	      
   	if(i%2==0) 
	   	
	      for(int k=i,j=1;k>=1,j<=i;k--,j++)
	{
	   	a[k][j]=sum;
	   	sum++;
   	}
   	i++;
   }


  
  
   while(i<=2*n-1)
   {
   	
   	if(i%2!=0) 
	   	for(int j=n,k=i-n+1;j>=i-n+1,k<=n;j--,k++)
	  {
	   	a[k][j]=sum;
	   	sum++;
   	  }
	      
   	if(i%2==0) 
	   	
	      for(int j=n,k=i-n+1;j>=i-n+1,k<=n;j--,k++)
	{
	   	a[j][k]=sum;
	   	sum++;
   	}
   i++;
   }
   for(int j=1;j<=n;j++)
	    for(int k=1;k<=n;k++)
	      {
		    cout<<a[j][k]<<" ";
		    if(k==n)cout<<endl;
	      }
	return 0;

}
