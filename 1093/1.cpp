#include <iostream>
using namespace std;
int n,a[101],b[101]={0},l=0;
void solve(int i,int m,int n)
{
	if(i>n) return;
	if(m==2)
	{
		if(a[i+1]==1)
			solve(i+1,2,n);
		else b[i+1]+=1;
	}
	if(m==4)
	{
		if(a[i+1]==1)
			solve(i+1,4,n);
		else b[i+1]-=2;
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		switch(a[i])
		{
			case 0:b[i]+=5;break;
			case 1:b[i]=0;break;
			case 2:b[i]+=10;solve(i,2,n);break;
			case 3:b[i]+=7;break;
			case 4:b[i]+=1;solve(i,4,n);break;
 		}
 		if(b[i]<0)
 			b[i]=0;
 		l+=b[i];
	}
	cout<<l<<endl;
}
