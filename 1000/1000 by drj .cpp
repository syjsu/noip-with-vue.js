#include <iostream>
using namespace std;
int main ( )
{
    char zf[27]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},a,b,c;
    int i,j,k;
    cin>>a;
    for(i=1;i<=27;i++)
    {
                      if(zf[i]==a)
                      {
                                 cout<<zf[27-i]<<endl;
                                 }
                                 }
    return 0;
}
