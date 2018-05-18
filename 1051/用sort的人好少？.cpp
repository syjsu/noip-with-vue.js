#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

float a1[50],a2[50];

int main()
{
	int n;
	cin>>n;
	int cnt1=0,cnt2=0;
	for(int q=0;q<n;q++){
		char a[10];
		float h;
		cin>>a>>h;
		if(a[0]=='f')
			a1[cnt1++]=h;
		else
			a2[cnt2++]=h;
	}
	sort(a1,a1+cnt1,greater<float>());
	sort(a2,a2+cnt2,less<float>());
	for(int q=0;q<cnt2;q++)
		printf("%.2f ",a2[q]);
	for(int q=0;q<cnt1;q++)
		printf("%.2f ",a1[q]);
	return 0;
}
