#include<iostream>
#include<cmath> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	 
	int s,x,n,i,max,min;
    cin>>n;
	if(n<1||n>1000)
    return 0;
    else
	{
		cin>>max;
		min=max;
		for(i=1;i<=n-1;i++)
		{
			cin>>x;
			if(x>=max)
			max=x;
			if(x<=min)
			min=x;
		}	
	}
	s=max-min;
	cout<<s<<endl;
	return 0;
}




