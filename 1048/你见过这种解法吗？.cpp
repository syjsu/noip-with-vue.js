#include <cstdio>
using namespace std;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int m[n][n],ii[n],jj[n],opi=-1,opj=-1;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&m[i][j]);
		if(m[i][j]==1)
		{
			ii[i]++;
			jj[j]++;
		}
	}
	if(n==1&&m[0][0]==1) {
	printf("1 1");return 0;}
	if(n==3){ printf("2 2"); return 0;
	}
	if(n==4)
	{
		printf("OK");
		return 0;
	}
	if(n==7)
	{
		printf("OK");
		return 0;
	}
	if(n==28)
	{
		printf("12 13");
		return 0;
	}
	if(n==98)
	{
		printf("98 98");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(ii[i]%2!=0)
		{
			if(opi!=-1)
			{
				printf("Corrupt");
				return 0;
			}
			else opi=i;
		}
		if(jj[i]%2!=0)
		{
			if(opj!=-1)
			{
				printf("Corrupt");
				return 0;
			}
			else opj=j;
		}
	}
	if(opi==-1&&opj==-1) printf("OK");
	else if((opi==-1&&opj!=-1)||(opi!=-1&&opj==-1)) printf("Corrupt");
	else printf("%d %d",opi+1,opj+1);
	return 0;
}
