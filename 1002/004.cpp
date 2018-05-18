#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double p,a,b,c,s;

int main(){
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4lf",s);
	return 0;
}
