#include<cstdio>
#include<cstring>
int a[1010],b[1010],ans[2010];
char ac[1010],bc[1010];

int maxx(int a,int b)
{
	return a>b ? a : b;
}

int x1000(int len,int i)

int main()
{
	int len1,len2,i,j,maxlen,lad1=0,lad2=0;
	bool bb=true;
	memset(ac,0,sizeof(ac));
	memset(bc,0,sizeof(bc));
	scanf("%s",ac);
	//scanf("%s",bc);
	bc[0]=0;
	len1=strlen(ac);
	len2=strlen(bc);
	while(len1%4!=0)
	{
		len1++;
		lad1++;
	}
	
	while(len2%4!=0) len2++;
	for(i=lad1;i<=len1+3;i+=4)
	a[(i+3)/4-1]=(ac[len1-i]-'0')*1000+(ac[len1-i+1]-'0')*100+(ac[len1-i+2]-'0')*10+(ac[len1-i+3]-'0');
	for(i=1;i<=len2;i+=4)
	b[(i+3)/4-1]=bc[len2-i]-'0'+bc[len2-i+1]-'0'+bc[len2-i+2]-'0'+bc[len2-i+3]-'0';
	
	len1=len1/4;
	len2=len2/4;
	
	/*
	for(i=1;i<=len1;i++)
	for(j=1;j<=len2;j++)
	{
		ans[i+j-1]+=(a[i]*b[j])%10;
		ans[i+j]+=(a[i]*b[j])/10;
	}
	for(i=1;i<=len1+len2;i++)
	if(ans[i]>=10)
	{
		ans[i+1]+=ans[i]/10;
		ans[i]%=10;
	}
	
	for(i=len1+len2;i>0;i--)
	{
		if(ans[i]==0&&bb) continue;
		else
		{
			printf("%d",ans[i]);
			bb=false;
		}
	}
	if(bb)
	printf("0");
	*/
	for(i=len1;i>0;i--)
	{
		if(a[i]==0&&bb) continue;
		else
		{
			printf("%d %d\n",a[i],i);
			bb=false;
		}
	}
	bb=true;
	printf("\n");
	for(i=len2;i>0;i--)
	{
		if(b[i]==0&&bb) continue;
		else
		{
			printf("%d",b[i]);
			bb=false;
		}
	}
	return 0; 
}
