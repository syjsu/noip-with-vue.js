#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	double apples=3.00;
	double pears=2.50;
	double oranges=4.10;
	double grapes=10.20; 
	cout<<"[1] apples"<<endl
		<<"[2] pears"<<endl
		<<"[3] oranges"<<endl
		<<"[4] grapes"<<endl
		<<"[0] Exit"<<endl;
	cin>>n;
	if(n==1)
		printf("price=%.1f",apples);
	else if(n==2)
		printf("price=%.1f",pears);
	else if(n==3)
		printf("price=%.1f",oranges);
	else if(n==4)
		printf("price=%.1f",grapes);
	else if(n==0){
	}
	else{
		cout<<"price=0";
	}
		
		
	return 0;
}
