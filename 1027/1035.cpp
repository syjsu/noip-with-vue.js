#include <iostream>
using namespace std;
int main()
{
	long m;
	int s;
	cin>>m;
	do
	{
		for(s=0;m>0;m=m/10)
			s+=m%10;
		m=s;
	}while(s>=10);

	cout<<s;	
	return 0;
 } 
