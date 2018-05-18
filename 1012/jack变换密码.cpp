#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int key, k;

    cin>>n;
    key = n%123;
    k = n%91;
	
    if(key >='a' && key <='z')
		putchar(key);
	else if(k >='A' && k <='Z')
		putchar(k);
 	else
		putchar('*');

	return 0;
}
