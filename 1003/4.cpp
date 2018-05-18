#include <cstdio>
using namespace std;
int main(){
	int x,s,t;
	scanf("%d",&x);
	s=x*1000+x;
	t=((s/7)/11)/13;
	printf("%d",t);
	return 0;
}
