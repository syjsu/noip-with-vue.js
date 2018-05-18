#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,i,m;
	double s=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>m;
		s+=m;
	}
	s=s/n;
	printf("%0.2lf",s);
	return 0;
} 
