#include<bits/stdc++.h>
using namespace std;
struct number
{
	int num,id_before,id_after;
} z[10002];
int n;
int comp1(number x,number y)
{
	return x.num<y.num;
}
int comp2(number x,number y)
{
	return x.id_before<y.id_before;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>z[i].num;
		z[i].id_before=i+1;
	}
	sort(z,z+n,comp1);
	z[0].id_after=1;
	for(int i=1,h=1;i<n;i++)
	{
		if(z[i].num>z[i-1].num)z[i].id_after=++h;
		else z[i].id_after=h;
	}
	sort(z,z+n,comp2);
	for(int i=0;i<n;i++)
		cout<<z[i].id_after<<" ";
	return 0;
}


