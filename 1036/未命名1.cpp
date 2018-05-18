#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,shang,yu;
	cin>>n;
	i=1;
	if(n==0)
	{
		cout<<"shang"<<0<<"yu"<<0;
		return 0;
	}
	else
	while(n!=0)
	{
		i++;
		cout<<"shang:"<<n/2<<"yu:"<<n%2<<endl;
		n=n/2;
		if(n==0)
		return 0;
	}
	return 0;
}
