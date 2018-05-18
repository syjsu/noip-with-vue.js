#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<algorithm>
using namespace std;
int main(){
	double a,b,c,p,s;
	cin>>a>>b>>c;
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4lf",s);
	return 0;
}
