#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	double x,y;
	cin>>x>>y;
	if(-1.0<=x && x<=1.0 && -1.0<=y && y<=1.0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}