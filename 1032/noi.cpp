#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=2*n-1;i+=2)
    {
    	for(j=1;j<=(2*n-1-i)/2;j++)
    	cout<<" ";
    	for(k=1;k<=i;k++)
    	cout<<k;
    	for(j=1;j<=(2*n-1-i)/2;j++)
    	cout<<" ";
		cout<<"\n";    	
    }
    for(i=1;i<=n-1;i++)
    {
    	for(j=1;j<=i;j++)
    	cout<<" ";
    	for(k=1;k<=2*n-1-2*i;k++)
    	cout<<k;
    	for(j=1;j<=i;j++)
    	cout<<" ";
		cout<<"\n";    	
    }
    return 0;
}
