#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{int a,b,c,z,t=0;
for(a=0;a<=20;a++)
for(b=0;b<=33;b++)
for(c=0;c<=300;c+=3){
	if(a*5+b*3+c/3==100){
		printf("����:");
	cout<<a<<'\0'<<endl;
	printf("ĸ��:");
	cout<<b<<'\0'<<endl;
	printf("С��:");
	cout<<c<<'\n'<<endl;
	t++;
	}
}
printf("����:");
cout<<t<<endl;
return 0;
}
