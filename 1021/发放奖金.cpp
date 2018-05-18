#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int i;
	cin>>i;
		if(i<=100000&&i>=0)
			printf("%.3lf\n",i*0.1);
		if(i<=200000&&i>100000)
			printf("%.3lf\n",(i-100000)*0.075+10000);
		if(i<=400000&&i>200000)
			printf("%.3lf\n",(i-200000)*0.05+17500);
        if(i<=600000&&i>400000)
			printf("%.3lf\n",(i-400000)*0.03+17500+10000);		
        if(i<=1000000&&i>600000)
			printf("%.3lf\n",(i-600000)*0.015+17500+10000+6000);
        if(i>=1000000)
			printf("%.3lf\n",(i-1000000)*0.01+17500+10000+6000+6000);
}
