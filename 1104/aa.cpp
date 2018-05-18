#include <bits/stdc++.h>
using namespace std;
int n,a[100000000];
int main(){
    for (int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for (int j=1;j<=n;j++)
    cout<<a[j];
    return 0;
}
