#include <cstdio>
using namespace std;
int main(){
	int ans=0;
	for (int i=1;i<=25;i++){
		int n;
		scanf("%d",&n);
		ans^=n;
	}
	printf("%d",ans);
	return 0;
}