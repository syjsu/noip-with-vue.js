#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double a,n,s=0;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>a;
		s+=a;
	}
	cout<<fixed<<setprecision(2)<<s/n;
	return 0;
}
