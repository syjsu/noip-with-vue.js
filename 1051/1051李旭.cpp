#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
double lineman[50];
double linewe[50];
struct ss
{
	string num;
	double tall;
}a[50];
int main()
{
freopen("train.in","r",stdin);
	//freopen("train.out","w",stdout);
int n,left=0,right=0;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>a[i].num>>a[i].tall;
                                             /* for(int i=1;i<=n;i++)cout<<a[i].num<<" "<<a[i].tall<<endl;   */
for(int i=1;i<=n;i++)
{
	if(a[i].num=="male")
   {
       left++;
       lineman[left]=a[i].tall	;
   }
    else if(a[i].num=="female")
	{
		right++;
		linewe[right]=a[i].tall;
    }
}

sort(lineman+1,lineman+1+left);
sort(linewe+1,linewe+1+right);
for(int i=1;i<=left;i++)printf("%.2lf ",lineman[i]);
for(int i=right;i>=1;i--)printf("%.2lf ",linewe[i]);
	return 0;
}
