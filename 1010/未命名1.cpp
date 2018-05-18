#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	float y; 
	cin>>x;
	if(x>30)
	cout<<"Fail";
	else
		    if(x>20)
		        {
			y=0.7*(x-20)+7.5+8+0.2;
			cout<<fixed<<setprecision(2)<<y;
		        }
			if((x>10)&(x<=20))
				{
					y=0.75*(x-10)+8+0.2;
				cout<<fixed<<setprecision(2)<<y;
				}
		    if(x<=10)
		        {
		    	y=0.8*x+0.2;
			cout<<fixed<<setprecision(2)<<y;
			    }
			
 } 
