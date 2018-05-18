//n! / ((n - m)! * m!)
#include<iostream>
using namespace std;
int main(){
	long long int i,n,m,j,s,c,x;
	while(cin>>n>>m){
		s=1;
		c=1;
		x=1;
		for(i=1;i<=n;i++){
			s*=i;
		}
		for(i=1;i<=m;i++){
			c*=i;
		}
		for(i=1;i<=n-m;i++){
			x*=i;
		}
		cout<<s/(x*c)<<endl;		
	}
} 