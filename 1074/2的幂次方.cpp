#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
void inline power(long num)
{
long t,i;
	if(num==1)
	cout<< "2(0)";
	else if(num==2)
	cout << "2" ;
	else
	for (i = 1,t = 1 ; ; ++ i )
	{
		t*=2;
		if(t>num)
		{
			t /= 2;
			cout << "2" ;
			--i;
			if(i==1){}
			else
   			{cout<<"("	;power(i);cout << ")";}
			cout<< "+";
			power(num - t);
			return;
		}
		if(t==num)
		{
			cout <<"2(";
			if(i==1){}
			else
			power(i);
			cout <<")";
			return;
		}
	}
}
int main()
{
	long i;
	cin >> i ;
	power(i);
}
