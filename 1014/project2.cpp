#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{int a;   cin>>a;{
       if (a>=90)        cout<<"Excellent";
else   if (a>=80&&a<90)  cout<<"Good";
else   if (a>=60&&a<80)  cout<<"Pass";
else   if (a<60)         cout<<"Fail";
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
