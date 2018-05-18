#include<iostream>
#include<cmath> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,i;
	float s;
    cin>>n;
    s=0;
	if(n<1||n>1000)
    return 0;
    else
	{
		for(i=1;i<=n;i++)
		{
			cin>>x;
			if(x<15||x>25) break;
			s=s+x;
		}
		s=float(s)/n;
		cout<<fixed<<setprecision(2)<<s<<endl;
	}
	return 0;
}




