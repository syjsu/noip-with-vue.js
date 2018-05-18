#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a[102];
int main()
{
    int n;
	unsigned long long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	sum+=a[i];
    }
    double ans=sum*1.0/n;
    printf("%.2lf\n",ans);
 	return 0;
}

