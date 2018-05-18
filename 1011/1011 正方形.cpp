#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y; 
    if(x<=1.0 && y<=1.0 && x>=-1.0 && y>=-1.0) {cout<<"Yes"<<endl;}
    else cout<<"No"<<endl;
    return 0;
}
