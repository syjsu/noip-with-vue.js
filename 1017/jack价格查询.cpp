#include <bits/stdc++.h>
using namespace std;

int main()
{
	int key;
	
	cin>>key;
	
	cout<<"[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] Exit\n";
	
	switch(key)
	{
		case 1: printf("price=%.1f", 3.0); break;       //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		case 2: printf("price=%.1f", 2.5); break;
		case 3: printf("price=%.1f", 4.1); break;
		case 4: printf("price=%.1f", 10.2); break;
		case 0: break;
		default : printf("price=0"); break;
	}

	return 0;
}
