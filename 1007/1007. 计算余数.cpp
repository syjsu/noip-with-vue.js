#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

	double a,b,r;
		cin>>a>>b;
	int k=(int)(a/b);
	r=a-((double)k*b);
	printf("%.2lf",r);
	return 0;
}
