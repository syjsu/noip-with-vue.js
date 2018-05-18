#include<iostream>
using namespace std;
int main()
{

    long n,num,y;
    cin>>num;
    while(num>0)
    {
        y = num%2;
        num=num/2;
        cout<<"shang:"<<num<<" yu:"<<y<<endl;;
    }
    cout<<endl;
    return 0;
}
