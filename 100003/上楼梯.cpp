/*
	Name:shixiang 
	Date: 09/04/17 09:57
	Description: 上楼梯就是斐波那契数列； 
*/
#include<cstdio>
#include<iostream>
using namespace std;
int a[40]={0,1,2},n;
int main(){
	cin>>n;
	for(int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n];
	return 0;
} 
