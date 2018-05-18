#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    bool get=false;
    cin>>n;
    string a[n],min;
    for(i=0;i<n;i++){
     cin>>a[i];
     sort(a[i].begin(),a[i].end());
     if(!get){min=a[i];get=true;}
     if(min>a[i])min=a[i];
    }
    cout<<endl<<min<<endl;
    system("PaUsE");
    return 0;
}
    
    
