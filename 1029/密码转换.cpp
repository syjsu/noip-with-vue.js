#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
            char b=a[i];
            if((b>='a'&&b<='w')||(b>='A'&&b<='W'))
            printf("%c",b+3); else
            if((b>'w'&&b<='z')||(b>'W'&&b<='Z'))
            printf("%c",b-23);else
            printf("%c",b);
    }
    system("pause");
    return 0;
}
