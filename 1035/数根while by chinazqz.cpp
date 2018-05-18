#include<iostream>
using namespace std;
int main()
{
	int num;cin>>num;
while(num>9){int a(0);
	while(num>0){a=a+num%10;num=num/10;}
	num=a;
}
	cout<<num;
return 0;
}
