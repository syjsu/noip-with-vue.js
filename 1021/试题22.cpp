#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
    if(x<=100000)
    y=10.0/100*x;
    else
    {
    	if(x<=200000)
    	y=10000+7.5/100*(x-100000);
    	else
    	{
    		if(x<=400000)
    		y=17500+5.0/100*(x-200000) ;
    		else
    		{
    			if(x<=600000)
    			y=22500+3.0/100*(x-400000)+5000;
    			else
				{
					if(x<=1000000)
					y=28500+1.5/100*(x-600000)+5000;
					else
					y=34500+1.0/100*(x-1000000)+5000;
				}
			}
		}
	}
	cout<<fixed<<setprecision(3)<<y<<endl;
	return 0;
}
