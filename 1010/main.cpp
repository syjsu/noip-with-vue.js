#include <iostream>
#include <cstdio>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double wei;
	cin>>wei;
	if(wei>30){
	cout<<"Fail";}
	else if(wei<=10){
	wei=0.8*wei+0.2;	
			printf("%.2f",wei);

	}
	else if(10<=wei&&wei<=20){
	wei=0.8*10+0.75*(wei-10)+0.2;
			printf("%.2f",wei);
	
	}
	else if(20<=wei&&wei<=30){
	wei=0.8*10+0.75*10+(wei-20)*0.70+0.2;	
		printf("%.2f",wei);
  
	}
	
	return 0;
	
}
