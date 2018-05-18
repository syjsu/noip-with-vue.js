#include<iostream>
#include<string>
using namespace std;
int coun(int m,int n){
	if(m==0||n==1)
		return 1;
	if(m<0)
		return 0;
	if(n>m)
		return coun(m,m);
	else
	   return coun(m,n-1)+coun(m-n,n);
}
int main(){
	int m,n;
	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>m>>n;
		int res=coun(m,n);
		cout<<res<<endl;
	}
	return 0;
}