#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=n%10;
	if (a*a*a+b*b*b+c*c*c==n)printf("yes !");
	else  printf("no !");
	return 0;
}
