#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{int a,b,c,z,t=0;
for(a=0;a<=20;a++)
for(b=0;b<=33;b++)
for(c=0;c<=300;c+=3){
	if(a*5+b*3+c/3==100){
		printf("公鸡:");
	cout<<a<<'\0'<<endl;
	printf("母鸡:");
	cout<<b<<'\0'<<endl;
	printf("小鸡:");
	cout<<c<<'\n'<<endl;
	t++;
	}
}
printf("共计:");
cout<<t<<endl;
return 0;
}
