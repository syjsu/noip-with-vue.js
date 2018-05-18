#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int wei;
    cin>>wei;
    if(wei>30)
        cout<<"Fail"<<endl;
    if(wei<=10)
        cout<<fixed<<setprecision(2)<<wei*0.80+0.2<<endl;
    if(wei>10 && wei<=20)
        cout<<fixed<<setprecision(2)<<(wei-10)*0.75+10*0.8+0.2<<endl;
    if(wei>20 && wei<=30)
        cout<<fixed<<setprecision(2)<<(wei-20)*0.70+10*0.75+10*0.8+0.2<<endl;
    return 0;
}
