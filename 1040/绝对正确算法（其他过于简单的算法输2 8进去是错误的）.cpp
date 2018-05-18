#include<iostream>
using namespace std;
long long a,b,x,y,z,i;
int main(){
	cin>>a>>b;i=1;
	if (b==1) {cout<<"Yes"; return 0;}
	x=a;y=b;
	while (y){
		z=x%y;x=y;y=z;
	}
	if (x==1){cout<<"No";return 0;}
	while (x>1){
		i++;
		if (x%i==0){
			while (x%i==0) x/=i;
			while (a%i==0) a/=i;
	                while (b%i==0) b/=i;
		}
	}
	if (b>1){cout<<"No";return 0;}
	cout<<"Yes";
	return 0;
}