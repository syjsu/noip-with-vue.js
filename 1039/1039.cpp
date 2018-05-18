#include<bits/stdc++.h>
using namespace std;
int poww(int a,int b)//¿ìËÙÃÝËã·¨
{
    int ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
            ans*=base;
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<poww(2,n)<<endl;
    return 0;

}
