#include<iostream>
#include<cmath> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	 
	long int s=0,n,i;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
            {
			if(n%i==0&&i!=sqrt(n))
            s+=2;
			if(n%i==0&&i==sqrt(n))
			s++;
		    }
	cout<<s<<endl;
	return 0;
}




