/*
	Name:shixiang 
	Date: 09/04/17 09:57
	Description: ��¥�ݾ���쳲��������У� 
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
