#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=a-1;i>=0;--i){
		for(int j=1;j<=i;++j)
		cout<<" ";
		for(int k=1;k<=a*2-1-2*i;++k)
		cout<<k;
		cout<<endl;
	}
	for(int i=1;i<=2*a-4;++i){
		for(int j=1;j<=i;++j)
		cout<<" ";
		for(int k=1;k<=a*2-1-i*2;++k)
		cout<<k;
		cout<<endl;
	}
	return 0;
}
