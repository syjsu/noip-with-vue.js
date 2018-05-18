#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int wei;
	double q;
	cin>>wei;	
	if (wei>30)
	{
		cout<<"Fail"<<endl;
    	return 0;
	}
    if(wei>20 && wei<=30) 
	    q=10*0.8+10*0.75+(wei-20)*0.7+0.2;
    if(wei>10 && wei<=20) 
	    q=10*0.8+(wei-10)*0.75+0.2;
    if(wei<=10) 
	    q=wei*0.8+0.2;	    
	cout<<fixed<<setprecision(2)<<q<<endl;
	return 0;
}
