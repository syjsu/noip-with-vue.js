#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	printf("%.2f",a-b*int(a/b));
}