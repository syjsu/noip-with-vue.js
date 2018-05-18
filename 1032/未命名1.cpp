#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,s,k=1;
	cin>>n;
	s=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<s;j++) cout<<" ";
		for(int l=1;l<=(2*i-1);l++) cout<<k++;
		cout<<endl;
		k=1;s--;
	} 
	s=2;
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<s;j++) cout<<" ";
		for(int l=1;l<=(2*i-1);l++) cout<<k++;
		cout<<endl;
		k=1;s++;
	} 
	return 0;
}
