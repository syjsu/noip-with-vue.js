#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a,q=0;
    cin>>a;
    if(a>30) cout<<"Fail";
    else{
		for(int j=a;j>0;j--){
		   if(j<=10) q+=0.80;
     	   if(j>10&&j<=20) q+=0.75;
     	   if(j>20&&j<=30) q+=0.70;
	}
	cout<<fixed<<setprecision(2)<<q+0.2; 
	}
	
	return 0;
}
