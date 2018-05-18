#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void fac(int);
int main(){
	int n;
	cin>>n;
	fac(n); 
	return 0;
}
void fac(int n){
	while(n){
		cout<<"shang:"<<n/2<<" "<<"yu:"<<n%2<<endl;
		n/=2;
	}
}
