// QQ:1206614133
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int d,i,a,j,y,t,aj=0,ay=0,at=0;
	scanf("%d",&d);
	for (i=1;i<=d;i++)
	{
		scanf("%d%d%d",&j,&y,&t);
		aj=aj+j;
		ay=ay+y;
		at=at+t;
	}
	a=aj+ay+at;
	printf("%d %d %d %d",aj,ay,at,a);
	return 0;
}
