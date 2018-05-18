#include <bits/stdc++.h>
using namespace std;
long long fz[500],fm[500],x,t;
char si[10000],f;
int n,k,i;
long long gys(long long a,long long b);
void js();

int main ()
{
cin>>n;

for(i=0;i<n;i++)
{   cin>>si;
	
	fz[i]=0;
	fm[i]=1;
	f='+';
	k=-1;
	do
	{
		k++;
		x=0;
		while (si[k]>='0' && si[k]<='9')
		{
		x=x*10+si[k]-'0';
		k++;
		}
		js();
		f=si[k];		
	}while (f!='=');
	
   t=gys(fz[i],fm[i]);
   fz[i]/=t;
   fm[i]/=t;
    	
		
}
   
for(int i=0;i<n;i++)
{
	if(fz[i]!=0)cout<<fz[i]<<'/'<<fm[i]<<endl;
	else cout<<fz[i]<<endl;
}

   
  return 0; 
}

long long gys(long long a,long long b)
{
	long long c ;
	while (a%b!=0)
	{
	c=a%b;
	a=b;
	b=c;
	}
    b=abs(b);
	return(b);
	
}
void js()
{
	switch(f)  
   {   case '+' : fz[i]+=fm[i]*x;
       break;
       case '-' : fz[i]-=fm[i]*x;
       break;
       case '*' : fz[i]*=x;
       break;
       case '/' : fm[i]*=x;
       break;
}
}


