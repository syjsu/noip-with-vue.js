#include<iostream>
#include<cstring>
using namespace std;
int a[100001];
int search(int x,int left,int right)
{
	if(left>right)
	{
		return left;//left值一定是无限接近你要找的数的下标 
	}
	if(left<=right)
	{
		int mid=(left+right)/2;
	    if(x==a[mid])
		    return mid;  //字符串，双引号。字符，单引号
		else
		    if(x>a[mid])
		    	return search(x,mid+1,right);
		    else
		        return search(x,left,mid-1);
	}
}
int main()
{
	int n,x,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x;
		int pos=search(x,1,n);
		if(pos==n+1)
		cout<<a[n]<<endl;
		else if(pos==1)
			cout<<a[1]<<endl;
		else 
		{
			int s1=a[pos]-x;
			int s2=x-a[pos-1];
			if(s2<=s1)
				cout<<a[pos-1]<<endl;
			else 
				cout<<a[pos]<<endl;
		}
	}
	
	
	return 0;
}
