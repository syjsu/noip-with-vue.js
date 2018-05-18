#include<iostream>
#include<iomanip>
using namespace std;
int b=0;
void q(int a)
{
	if((a/b)!=0){
		q(a/b);
		cout<<setiosflags(ios::uppercase)<<hex<<a%b;	
	}
	else{
		cout<<setiosflags(ios::uppercase)<<hex<<a;
	}
} 
int main()
{
	int a;
	cin>>a>>b;
	q(a);
	return 0;
}
