#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int ans=0,i=0,n=0;
	cin>>n;
	for(i=1;i<=sqrt(n);i++){
	if(n%i==0)
	{ans++;}	
	}
	cout<<ans*2;
	return 0;
}
