#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
string line[20005];
struct ss
{
	int num;
	string name;
}a[20005];
int main()
{
//freopen("train.in","r",stdin);
	//freopen("train.out","w",stdout);
int n,left=0,right=0;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>a[i].num>>a[i].name;
/*for(int i=1;i<=n;i++)
    cout<<a[i].num<<" "<<a[i].name<<endl;*/
for(int i=1;i<=n;i++)if(a[i].num==0)left++;
right=n-left;
for(int i=1;i<=n;i++)
    {
    	if(a[i].num==0)
		{
			left--;
			line[left+1]=a[i].name;
    	}
    	else if(a[i].num==1)
    	{
    		right--;
    		line[n-right]=a[i].name;
    	}
    }
for(int i=1;i<=n;i++)cout<<line[i]<<endl;
	return 0;
}
