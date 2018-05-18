#include<iostream>
using namespace std;
long long int a[1000000+5];
int main(){
	int b[15];
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=1000000;i++){
		a[i]=2*a[i-1]+a[i-2];
		a[i]=a[i]%32767;
	}
	int n,k;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			cin>>k;
			cout<<a[k]<<endl; 
		}
	}	
} 