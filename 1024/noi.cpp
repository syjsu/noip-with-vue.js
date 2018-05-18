#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int i,n,s=0;
    cin>>n;    
    for(i=1;i<=floor(sqrt(n));i++)
    {
    	if(n%i==0)
    	s++;    	
    }
    s*=2;
    if(floor(sqrt(n))==sqrt(n))
    s-=1;
    cout<<s<<"\n";
	return 0;
}
