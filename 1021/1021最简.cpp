#include<iostream>
#include<iomanip>
using namespace std;double i,p;int main(){cin>>i;
if (i>100000)
	if(i>200000)
		if(i>400000)
			if(i>600000)
				if(i>1000000)
					p=i*0.01+29500;
				else p=i*0.015+24500;
			else p=15500+i*0.03;
		else p=7500+i*0.05;
    else p=2500+i*0.075;
else p=0.1*i;
cout<<setiosflags(ios::fixed)<<setprecision(3)<<p;}
