#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		printf("shang:%d yu:%d\n",n/2,n%2);
		n/=2;
	}
}
