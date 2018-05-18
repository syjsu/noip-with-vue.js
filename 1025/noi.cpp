#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int i,n,j=0,y=0,t=0,jt=0,yt=0,tt=0,s=0,jp[20],yp[20],tp[20];
    cin>>n;   
    for(i=1;i<=n;i++)
    {
    	cin>>jp[i]>>yp[i]>>tp[i];
    	j+=jp[i];
    	y+=yp[i];
    	t+=tp[i];
    }
    s+=j+y+t;
    cout<<j<<" "<<y<<" "<<t<<" "<<s<<"\n";
	return 0;
}
