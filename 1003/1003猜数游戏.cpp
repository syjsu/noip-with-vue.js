#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a,b,c;
	cin>>n;
	a=n/100; //百位数字 
	b=n/10%10;//十位位数字
	c=n%10;//个位数字
	m=a*100+b*10+c+c*1000+b*10000+a*100000;//构造六位数； 
	m=m/7;
//	cout<<m<<endl;
	m=m/11;
//	cout<<m<<endl;
	m=m/13;
	cout<<m<<endl;
	return 0;
} 
