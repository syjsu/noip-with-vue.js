#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<=10)
	printf("%.2f",a*0.8+0.2);
	else if(a<=20)
		 printf("%.2f",(a-10)*0.75+8.2);
		 else if(a<=30)
		      printf("%.2f",(a-20)*0.7+15.7);
		      else 
		      cout<<"Fail";
    return 0;
}		
		  	   
	