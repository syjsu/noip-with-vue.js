#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"������С������������Ů��������"<<endl;
	cin>>a>>b;
	if (a+b<10)
	cout<<"water"<<endl; 
		else 
		{
		    if(a+b>=10 && a>b)
			cout<<"tree"<<endl;
			else 
			cout<<"tea"<<endl;
	    }
	return 0;
}
