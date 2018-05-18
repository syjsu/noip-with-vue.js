#include <bits/stdc++.h>
using namespace std;

int a[1000] ,b[1000];
int n1,n2,i,k,ys;
int fs[10000];

int zdgys(int x,int y);

int main ()
{
	cin>>n1;
	for(i=0;i<n1;i++)
	  cin>>a[i];
	cin>>n2;
	for(i=0;i<n2;i++)
	  cin>>b[i];
	
	for(i=0;i<n1;i++)
	 for(k=0;k<n2;k++)
	  { 
	   ys=zdgys(a[i],b[k]);
	   a[i]/=ys;
	   b[k]/=ys;	  	
	  }
	  
	int ws=0,ti; 	 
	fs[0]=1;
	  
	for(i=0;i<n1;i++)
	{ if (a[i]==0) ws=0;
	for(k=0;k<=ws;k++)
	  	  	fs[k]*=a[i];
	  	ti=0;
	    while (ti<ws)
	      { fs[ti+1]+=fs[ti]/10;
	      fs[ti]%=10;
	      ti++;
		  }
		while (fs[ws]>9)
		  { fs[ws+1]+=fs[ws]/10;
	      fs[ws]%=10;
	      ws++;
		  }	
	  	
	   } 
	   for(i=ws;i>=0;i--)
	   {cout<<fs[i];
	   fs[i]=0;
	   }
	   cout<<endl;
	   
	   
	   ws=0; 	 
	fs[0]=1;
	  
	for(i=0;i<n2;i++)
	{ 
	for(k=0;k<=ws;k++)
	  	  	fs[k]*=b[i];
	  	ti=0;
	    while (ti<ws)
	      { fs[ti+1]+=fs[ti]/10;
	      fs[ti]%=10;
	      ti++;
		  }
		while (fs[ws]>9)
		  { fs[ws+1]+=fs[ws]/10;
	      fs[ws]%=10;
	      ws++;
		  }	
	  	
	   } 
	   for(i=ws;i>=0;i--)
	   cout<<fs[i];	   
	   cout<<endl;
   
  return 0; 
}

int zdgys(int x,int y)
{
	int t;
	while (x%y>0)
	{
		t=x%y;
		x=y;
		y=t;
	}
	return y;
	
}





