#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n, h, t, o;
	scanf("%d", &n);
	h = n/100;
	t = (n/10)%10;
	o = n%10;
	printf(pow(h,3)+pow(t,3)+pow(o,3)==n?"YES":"NO");
	return 0;
}
