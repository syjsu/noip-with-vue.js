#include <iostream>
#include <cstdio>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int a , b , c, x;
	cin>>x;
	a=x%10;
	b=x/10%10;
	c=x/100;
	if (x==a*a*a+b*b*b+c*c*c)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
