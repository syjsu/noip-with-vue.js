#include"cstdio"
#include"cstdlib"
#include"iostream"
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(a*a*a+b*b*b+c*c*c==n) printf("Yes");
	 else printf("No");
	return 0;
}
