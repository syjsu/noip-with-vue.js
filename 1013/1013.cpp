#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	if(x+y>z&&x+z>y&&y+z>x){
		if(x==y||y==z||z==x||(x==y)&&(y==z)) cout<<"Equilateral";
		else if(x*x==y*y+z*z||x*x+y*y==z*z||y*y==x*x+z*z) cout<<"Right";
		     else cout<<"General";
	}
	else cout<<"NO";
	return 0;
}
