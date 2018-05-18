#include <iostream>

int main()
{
	using namespace std;

	cout<<"请输入一个字符：";
	char a;
	cin>>a;
	if (a == 'a')
		a = 'z';
	cout<<"该字符加密后为:"<<a<<endl;
	
	return 0;
}