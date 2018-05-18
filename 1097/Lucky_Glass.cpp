///**/Lucky_Glass/**///
#include<cstdio>
int m,n,ans;
void flag(int sn,int put,int last)
{
	if(put==m && sn>=last)
	{
		ans++;
		return;
	}
	for(int i=last;i<=sn/2;i++)
		flag(sn-i,put+1,i);
}
int main()
{
	scanf("%d%d",&n,&m);
	flag(n,1,1);
	printf("%d\n",ans);
	return 0;
}
/*
5=1+4
5=1+1+3
*/