#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a>=90) cout<<"Excellent";
	if(80<=a&&a<90) cout<<"Good";
	if(60<=a&&a<80) cout<<"Pass";
	if(a<60) cout<<"Fail";
	return 0;
}
