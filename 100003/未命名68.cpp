#include<iostream>
using namespace std;
long long int a[100005];
int main(){
	int i;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	for(i=4;i<=50;i++){
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	while(cin>>n){
		cout<<a[n];
	}
}