#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int w;		//质量。一件的质量是分段计算的。
	cin>>w;
	double m=0.0;	//钱数
	if(w>30){
		cout<<"Fail";
	}else{
		if(w>20){			//多于20的，此时剩下的20还分两段，不是都0.7。
			m+=(w-20)*0.7;
			w=20;
		}
		if(w>10){			//多于10的，此时剩下的10不是0.75，是0.8。
			m+=(w-10)*0.75;
			w=10;
		}
		m+=w*0.8;		//不多于10的
		printf("%.2lf",m+0.2);	//加上一件的手续费
	}
}
