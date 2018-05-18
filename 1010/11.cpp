#include <cstdio>
using namespace std;
int main(){
	double wei,a=0;
	scanf("%lf",&wei);
	if(wei>30){
		printf("Fail");
	}else{
		if(wei>20){
			a+=(wei-20)*0.7;
			wei=20;
		}
		if(wei>10){
			a+=(wei-10)*0.75;
			wei=10;
		}
		a+=wei*0.8;
		printf("%.2lf",a+0.2);
	}
	return 0;
}
