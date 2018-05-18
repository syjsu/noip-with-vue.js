#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
bool sushu(int p)
{
   if (p==1) return 0;
   for (int i=2;i<=floor(sqrt(p));i++) 
     if (p%i==0) return 0;
   return 1;
} 





int main()
{
	int y,n,i,t,s,k;
	bool m;
	int a[100001]={0};
	t=0;
	cin>>n;
	y=n;
	if (y==1) 
	{
	cout<<1;
    exit(0);
	}
	for(i=1;i<=sqrt(y);i++)
	{
		k=0;
		m=sushu(i);
		while ((m)&&(n%i==0)) 
		{
			if (k==0) t++;
			k=1;
			n=n/i;
			a[t]++;
		}
		if (sushu(n)==1) {
		a[++t]++;
		break;}
	}
	s=1;
	for (i=1;i<=t;i++)
	{
		s=(a[i]+1)*s;
	}
    if (t!=0)	cout<<s;
    else cout<<2;
    return 0;
}
