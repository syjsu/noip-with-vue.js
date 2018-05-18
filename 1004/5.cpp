#include <cstdio>
using namespace std;
int main(){
	long int n,m,a,s,t,z;
	scanf("%ld %ld %ld",&n,&m,&a);
	s=n/a;
	t=m/a;
	z=s*t;
	printf("%ld",z);
	return 0;
}
