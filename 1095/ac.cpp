#include <iostream>
#include <cstring>
using namespace std;
struct vm
{
	int v;
	int m;
	int index;
}a[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].v>>a[i].m;
		a[i].index=i;
	}	
	for(int i=1;i<n;i++)
		for(int j=1;j<=i;j++)
		{
			if(a[j].v<a[j+1].v)
				swap(a[j],a[j+1]);
			else if(a[j].v==a[j+1].v)
				if(a[j].m>a[j+1].m)
					swap(a[j],a[j+1]);
		}
	for(int i=1;i<=n;i++)		
		cout<<a[i].index<<" ";
	cout<<endl;
}
