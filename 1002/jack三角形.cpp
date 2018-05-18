//Èý½ÇÐÎ
#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a, b, c, s;
	cin>>a>>b>>c;
	s = (a+b+c)*0.5;
	s = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.4f", s);
	return 0;
}
