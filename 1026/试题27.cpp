#include<iostream>
#include<cmath> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n1,n2,n,max,min,i;
	float N=0;
    cin>>n1>>n2;
    N=N+n1+n2;
    if(n1>n2)
	{
	    max=n1;
	    min=n2; 
	} 
	else
	{
	    max=n2;
		min=n1;
    }
	for (i=1;i<=8;i++)
	   {
	   	   cin>>n;
	   	   if(n>max)
	   	   max=n;
	   	   if(n<min)
	   	   min=n;
	   	   N=N+n;
	   }
	N=(N-max-min)/8;
	cout<<fixed<<setprecision(3)<<N<<"\n";
	return 0;
}




