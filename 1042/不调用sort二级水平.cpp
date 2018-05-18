#include<iostream>
using namespace std;
int sum[500],yw[500],xh[500];
int main()
{
	int n,sx,yy;
	cin>>n;
	sum[0]=-1;yw[0]=-1;xh[0]=-1;
	cin>>yw[1];sum[1]+=yw[1];
	cin>>sx>>yy;sum[1]+=sx;sum[1]+=yy;
	xh[1]=1;
	for(int i=2,j,jhcj,jhyw,jhxh;i<=n;i++)
	  {
		cin>>yw[i];sum[i]+=yw[i];
	    cin>>sx>>yy;sum[i]+=sx;sum[i]+=yy;
	    xh[i]=i;
		 jhcj=sum[i];jhyw=yw[i];jhxh=xh[i];
		 for(j=i-1; ;j--)
		   {
		      if(sum[i]<sum[j]) {break;}
		      if(sum[i]==sum[j])
		        {
				   while(sum[i]==sum[j]&&yw[i]>yw[j])
		             {
				        j--;
				     }
				   break;
				}
			  if(sum[i]==sum[j]&&yw[i]==yw[j])
			    {
				   while(sum[i]==sum[j]&&yw[i]==yw[j]&&xh[i]<xh[j])
			         {
				        j--;
				     }
				   break;
				}
			  if(j==0) break;
		   }
		 for(int k=i;k>=j+1;k--)
		   {
			  sum[k]=sum[k-1];yw[k]=yw[k-1];xh[k]=xh[k-1];
		   }
		 sum[j+1]=jhcj;yw[j+1]=jhyw;xh[j+1]=jhxh;
	  }
	for(int i=1;i<=5;i++) cout<<xh[i]<<" "<<sum[i]<<endl;
	return 0;
}
