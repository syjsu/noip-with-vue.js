#include<bits/stdc++.h>
using namespace std;
int main(){
	int w;
	cin>>w;
	double m=0.0;
	if(w>30)  cout<<"Fail";
	else{
		    if(w>20)  {m+=(w-20)*0.7;w=20;}
		    if(w>10)  {m+=(w-10)*0.75;w=10;}
		    m+=w*0.8;
		    cout<<fixed<<setprecision(2)<<m+0.2<<endl;
	    }
}
