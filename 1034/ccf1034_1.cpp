#include <cstdio>

int main()
{
//	freopen("in.txt", "r", stdin);
	int w, s=0;
	int i;
	scanf("%d", &w);
	for (i=0; i<=w/50; i++)		//i:how much 50s is changed into
	{
	//	for (j=0; j<=(w-i*50)/20; j++)	//j:how much 20s is changed into
	//		s++;
	//	TLE when w>700000	orzorzorz
		s += (w-i*50)/20 + 1;
	}
	printf("%d", s);
	return 0;
}
