#include <bits/stdc++.h>
using namespace std;

int main()
{
	int P;
	float R,X,Y;
	cin>>R>>X>>P;
	R=(R+100)/100;
	Y=X*pow(R,P);
	printf("%.2f",Y);
	return 0;
}
