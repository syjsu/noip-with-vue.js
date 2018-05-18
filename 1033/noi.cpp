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
    for(i=1;i<=n;i++)
    {
    	cout<<"1*"<<i<<"="<<i;
    	for(j=2;j<=i;j++)
    	cout<<" "<<j<<"*"<<i<<"="<<i*j;
    	cout<<"\n";
    }
    return 0;
}
