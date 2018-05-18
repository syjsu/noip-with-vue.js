#include <bits/stdc++.h>
using namespace std;
void pp(int x,int k);
int n,m,gs,a[50];
 
int main ()
{ 
gs=0;
cin>>n>>m;
pp(1,0);
cout<<gs;	
return 0;
}

void pp(int x,int k)
{   int s;
    do 
    {
	s=0;
	a[k]=x;
	for(int i=0;i<=k;i++) s+=a[i];
	if (k+1<m-1)  pp(x,k+1);			
	 else if(s+x<=n) gs++;	 
	x++;	
    }while(s+x*(m-k-1)<=n);
}
