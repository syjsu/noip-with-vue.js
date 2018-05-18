#include<iostream>
using namespace std;
int main()
{
	int n,s,i,j;
	int a[10000];
	cin>>n;
	i=s=0;
	while(n!=0)
	{
		a[i]=n%10;
			n=n/10;
		i++;
	}
	for(j=0;j<=i+1;j++)
		s=s+a[j];
	cout<<s<<endl;
	return 0;
}
