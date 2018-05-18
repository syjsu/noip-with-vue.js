#include<cstdio>
#include<iostream>
using namespace std ;

int main()
{
	float a;
	
	cin>>a;
	
	if (a>=10)
 	printf("%.3f",a/2-1.5);

	else if  (a>=5)
 			printf("%.3f",2-1.5*(a-3)*(a-3));

else if(a>=0)
	
	 			printf("%.3f",a+2.5);

 	
	
	
	
	
	
	return 0;
}
