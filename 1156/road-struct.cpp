
#include <cstdio>
#include <cstring>
struct big
{
	char num[500];
	int ws;//weishu
	big()
	{
		ws=1;
		memset(num,0,sizeof(num));
		num[0]=1;
	}
};
void multiple(big &a,int b)
{
	int x=0,i;
	for(i=0;i<a.ws;i++){
		x+=((int)a.num[i])*b;
		a.num[i]=(char)(x%10);
		x/=10;
	}
	while(x!=0){
		a.num[a.ws]=(char)(x%10);
		x/=10;
		a.ws++;
	}
}
void divide(big &a,int b)
{
	int x=0,i;
	for(i=a.ws-1;i>=0;i--)
	{
		x=x*10+((int)a.num[i]);
		a.num[i]=x/b;
		x%=b;
	}
	while(a.ws>1&&a.num[a.ws-1]==0)a.ws--;
}
void printbig(big &a)
{
	for(int i=a.ws-1;i>=0;i--)putchar(a.num[i]+'0');
}
int main()
{
	int m,n,t;
	big r;
	scanf("%d%d",&m,&n);
	if(m>n)t=m,m=n,n=t;
	int x=m+n-2,y=m-1;
	if(x==0||x==y) ;
	else for(t=1;t<=y;t++){
		multiple(r,x-t+1);
		divide(r,t);
	}
	printbig(r);
	getchar();
	getchar();
	return 0;
}