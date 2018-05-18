#include <cstdio>
#include <cmath>
#define PI 3.1415926535897932384626

int main()
{
	int n, k, i;
	double m;
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d%lf", &k, &m);
		switch (k)
		{
			case 1 : printf("%.3lf\n", sqrt(m));	break;
			case 2 :
				m *= PI/180.0;
				printf("%.3lf  %.3lf  %.3lf\n", sin(m), cos(m), tan(m));
			break;
			case 3 : printf("%.3lf  %.3lf\n", asin(m), acos(m));		break;
			case 4 : printf("%.3lf\n", atan(m));	break;
		}
	}
	return 0;
}
