#include <cstdio>
using namespace std;
int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/100;
	b=(n-(a*100))/10;
	c=n-(a*100)-(b*10);
	d=a*a*a+b*b*b+c*c*c;
	if (n==d)
		printf("YES");
	else
		printf("NO");
	return 0;
}
