#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,fx;
	cin>>x;
	if(0<=x&&x<5)
		fx=x+2.5;
	if(5<=x&&x<10)
		fx=2-1.5*(x-3)*(x-3);
	if(10<=x&&x<20)
		fx=x/2-1.5;
	printf("%.3lf",fx);
	return 0;
}
