#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"请分别输入男生人数和女生人数"<<endl;
	cin>>a>>b;
	c=a+b;
	if(c<10)
	    cout<<"water"<<endl;
	else if(a>b)
	          cout<<"tree"<<endl;
	      else
		       cout<<"tea"<<endl; 
	return 0;
}
