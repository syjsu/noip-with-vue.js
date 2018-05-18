#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	float a,b;
	cin>>a>>b;
	printf("%.2f",a-b*int(a/b));
    return 0;
}
