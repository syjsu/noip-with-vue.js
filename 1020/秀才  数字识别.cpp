#include<bits/stdc++.h>
using namespace  std;
int a[10001];
int main()
{
	int n,i,ans=0;
    cin>>n;
    i=1;
    while(n!=0)
    {
    	a[i]=n%10;
    	n/=10;
    	i++;
    	ans++;
    }
    cout<<ans<<endl;
    for(i=ans;i>=1;i--)
       cout<<a[i]<<endl;
   return 0;
}

