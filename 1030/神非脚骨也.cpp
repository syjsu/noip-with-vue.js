#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    long long n,sum=1;
    cin>>n;
    if(n>1)
    while(1){
     sum++;
     if(n%2)n=3*n+1;
     else   n=n/2;
     if(n==1)break;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
    
    
    
