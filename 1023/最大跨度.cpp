#include<iostream>
using namespace std;
int a[1000];
int main()
{
	int n,x=0,y;
	cin>>n; 

	for(int i=0;i<n;i++)
	{   
	   cin>>a[i];
	   if(i==0)	
	   y=a[0];
	   if(x<a[i])
	   x=a[i];
	   if(y>a[i])
	   y=a[i];
		}
		cout<<x-y;
		return 0;
} 
