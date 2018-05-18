#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int a,n,min=1000000,max=0;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>a;
		if(a>max) max=a;
		if(a<min) min=a;
	}
	cout<<max-min;
	return 0;
}
