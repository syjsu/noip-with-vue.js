#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
 int f(int n)
{
if ((n==3)||(n==2))
return 1;
else 
return f(n-1)+f(n-2);
}
 int main()
{
int x,n;
cin>>n;
cout<<f(n);
}

