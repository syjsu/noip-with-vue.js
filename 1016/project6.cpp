#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{int a,b,c;cin>>a>>b;
switch (b)
{ case 1:case 3:case 5:case 7:case 8:case 10:case 12:   c=31;break;
  case 4:case 6:case 9:case 11:                         c=30;break;
  case 2:
if (a%400==0||a%4==0&&a%100!=0)
   c=29;
else
   c=28;}
   cout<<c<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
