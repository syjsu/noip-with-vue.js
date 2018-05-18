#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	if(n>30)
		cout<<"Fail";
	else if(n>20)
	    printf("%.2f", 8 + 7.5 + (n-20)*0.7+0.2);
	else if(n>10)
		printf("%.2f", 8 + (n-10)*0.75+0.2);
	else
		printf("%.2f", n*0.8+0.2);
	return 0;
}
