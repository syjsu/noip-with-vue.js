#include<iostream>
using namespace std;

int n,a[100001];

void bsort(){
	int s[100001]={};
    for(int i=0;i<n;i++)s[a[i]]++;
	for(int i=0;i<100001;i++)
		for(int j=1;j<=s[i];j++)cout<<i<<' ';
	return;
} 

int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	bsort();
	return 0;
}
