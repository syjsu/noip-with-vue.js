#include<iostream>
using namespace std;
int main() 
{
	int day,gold=0,silver=0,copper=0;
	cin>>day;
	int i;
	for(i=1;i<=day;i++){
		int a,b,c;
		cin>>a>>b>>c;
		gold=gold+a;
		silver=silver+b;
		copper=copper+c;
	}
	cout<<" "<<gold<<silver<<copper<<gold+silver+copper;
	return 0;
}
