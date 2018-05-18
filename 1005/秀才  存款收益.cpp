#include<bits/stdc++.h>
using namespace  std;
int main()
{
	float r,x,p,i;
    cin>>r>>x>>p;
    for(i=1;i<=p;i++)
    {
    	x=x*((100+r)/100);
    }
    cout<<fixed<<setprecision(2)<<x<<endl;
   return 0;
}

