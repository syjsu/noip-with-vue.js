#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int w;		//������һ���������Ƿֶμ���ġ�
	cin>>w;
	double m=0.0;	//Ǯ��
	if(w>30){
		cout<<"Fail";
	}else{
		if(w>20){			//����20�ģ���ʱʣ�µ�20�������Σ����Ƕ�0.7��
			m+=(w-20)*0.7;
			w=20;
		}
		if(w>10){			//����10�ģ���ʱʣ�µ�10����0.75����0.8��
			m+=(w-10)*0.75;
			w=10;
		}
		m+=w*0.8;		//������10��
		printf("%.2lf",m+0.2);	//����һ����������
	}
}
