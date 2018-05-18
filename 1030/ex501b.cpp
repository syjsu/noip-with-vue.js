#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,x=0;
	do
	{
		i++;
		if(i%2==1&&i%3==1&&i%5==1)
		{
	printf("%d\n",i);
			x++;
        }
	}
	while(x<10);
	return 0;
}