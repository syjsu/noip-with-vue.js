#include <iostream>
#include <iomanip>            
#include <cmath>                    
using namespace std;
int main()           
{   int a,b,c;
    double  p,s;          
    cin>>a>>b>>c;
    p=(double)(a+b+c)/2;           
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}

