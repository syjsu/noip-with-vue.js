#include<cstdio> 
#include<cstdlib> 
#include<iostream> 
using namespace std;
int main()
{
	int a;
	cin>>a;
	if((a%123>=97)and(122>=a%123))    cout<<char(a%123)<<endl;
	else
		       {
				     if((a%91>=65)and(90>=a%91))	cout<<char(a%91)<<endl;
                   	 else                           cout << "*"<<endl;;
               }
    system("pause");
	return 0;
}
