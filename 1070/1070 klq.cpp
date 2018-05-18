#include<cstdio>
using namespace std;

int step=1;

void pt(int x,char st,char ed)
{
	if(x==1)
	{
		printf("%d.Move %d from %c to %c\n",step,x,st,ed);
		step++;
		return;
	}
	if(x>1) 
		pt(x-1,st,294-st-ed);
	printf("%d.Move %d from %c to %c\n",step,x,st,ed);
	step++;
	pt(x-1,294-st-ed,ed);
}

int main()
{
	int num;
	scanf("%d",&num);
	pt(num,'a','c');
	return 0;
}
