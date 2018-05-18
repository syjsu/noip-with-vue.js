#include <bits/stdc++.h>
using namespace std;

int main()
{
	int key;

	cin>>key;
	switch(key/10)
	{
		case 10:
		case  9: cout<<"Excellent"; break;
		case  8: cout<<"Good"; break;
		case  7:
		case  6: cout<<"Pass"; break;
		default: cout<<"Fail";
	}

	return 0;
}
