#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
	int i=1;
double f(double x,int n){
	x+=i;
	x=sqrt(x);
	i++;
	if(i<=n)
		return f(x,n);
	else
		return x;
}
int main(){
	double x;
	int n;
	cin>>x>>n;
	printf("%.2f",f(x,n));
}
	