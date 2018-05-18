#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double x,f,s=0;
	cin>>x;
	if(x>=0&&x<5){
		s=x+2.5;
		printf("%0.3lf",s);
		return 0;
	}
	if(x>=5&&x<10){
		s=2-1.5*(x-3)*(x-3);
		printf("%0.3lf",s);
		return 0;
	}
	if(x>=10&&x<=20){
		s=x/2-1.5;
		printf("%0.3lf",s);
		return 0;
	}
	return 0;
}
