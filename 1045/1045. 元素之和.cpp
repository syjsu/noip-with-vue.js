#include<bits/stdc++.h>
using namespace std;
int a[101],s[3];
int main()
{
	int i;
	for (i=1;i<=16;i++) cin>>a[i];
	s[1]=a[1]+a[6]+a[11]+a[16];
	s[2]=a[4]+a[7]+a[10]+a[13];
	cout<<s[1]<<" "<<s[2]<<endl;
	return 0;
}

