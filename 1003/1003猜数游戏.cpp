#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a,b,c;
	cin>>n;
	a=n/100; //��λ���� 
	b=n/10%10;//ʮλλ����
	c=n%10;//��λ����
	m=a*100+b*10+c+c*1000+b*10000+a*100000;//������λ���� 
	m=m/7;
//	cout<<m<<endl;
	m=m/11;
//	cout<<m<<endl;
	m=m/13;
	cout<<m<<endl;
	return 0;
} 
