#include<iostream>
#include<algorithm>
using namespace std;
int m,n,k,l,d,row[1005],ver[1005],rero[1005],reve[1005];
int main()
{
	cin>>m>>n>>k>>l>>d;
	for(int i=1;i<=d;i++)
	{
		int xi,yi,pi,qi;
		cin>>xi>>yi>>pi>>qi;
		if(xi==pi)
		ver[yi<qi?yi:qi]++;
		else
		row[xi<pi?xi:pi]++;
	}
	for(int i=1;i<=k;i++)
	{
		int maxn=-1,maxnk=0;
		for(int j=1;j<=m;j++)
		{
			if(maxn<row[j])
			{
				maxn=row[j];
				maxnk=j;
			}
		}
		rero[i]=maxnk;
		row[maxnk]=-1;
	}
	for(int i=1;i<=l;i++)//l--ver
	{
		int maxn=-1,maxnk=0;
		for(int j=1;j<=n;j++)
		{
			if(maxn<ver[j])
			{
				maxn=ver[j];
				maxnk=j;
			}
		}
		reve[i]=maxnk;
		ver[maxnk]=-1;
	}
	sort(rero+1,rero+1+k);
	sort(reve+1,reve+1+l);
	for(int i=1,j=1;j<=k;i++)
	{
		if(rero[i]!=0&&rero[i]!=-1)
		{
			cout<<rero[i];
			if(j!=k)
			cout<<' ';
			j++;
		}
	}
	cout<<endl;
	for(int i=1,j=1;j<=l;i++)
	{
		if(reve[i]!=0&&reve[i]!=-1)
		{
			cout<<reve[i];
			if(j!=l)
			cout<<' ';
			j++;
		}
	}
	return 0;
}