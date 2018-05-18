#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int g=n%100%10,s=n/10%10,b=n/100; 
    cout<<(pow(g,3)+pow(s,3)+pow(b,3)==n?"YES":"NO");
	return 0;

}

