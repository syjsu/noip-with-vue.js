#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int i,s=0,x;
    long long n;
    cin>>n;
    while(n>0)
    {
    	x=n%10;
    	s+=x;
    	n=n/10;
    }
    cout<<s;
    
	return 0;
}
