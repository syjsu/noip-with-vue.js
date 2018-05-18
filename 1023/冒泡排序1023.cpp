// QQ:1206614133
#include <cstdio>
using namespace std;
void bubble_sort(int a[],int n){
    int i,j;
    int tmp;
    for(i=1;i<=n-1;i++)
        for(j=1;j<=n-i;j++)
		{
            if(a[j] > a[j+1])
			{
                tmp =a[j];
                a[j] =a[j+1];
                a[j+1]=tmp;
            }
        }
}
int main(){
	int a,b[10000],i,c;
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%d",&b[i]);
	}
	bubble_sort(b,a);
	c=b[a]-b[1];
	printf("%d",c);
	return 0;
}
