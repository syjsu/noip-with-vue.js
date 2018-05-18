#include<bits/stdc++.h>
int a[100001],n;
void qs(int l,int r){
	int i,j,t,p;
	if(l>r)
	return;
	
	p=a[l];
	i=l;
	j=r;
	while(i!=j)
	{
		while(a[j]>=p && i<j)
		j--;
		while(a[i]<=p && i<j)
		i++;
		
		if(i<j)
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;}
		
	} 
	a[l]=a[i];
	a[i]=p;
	qs(l,i-1);
	qs(i+1,r);
	return;
}
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
			qs(1,n);
			for(i=1;i<=n;i++)
			printf("%d ",a[i]);
			getchar();getchar();
			return 0;

    }

