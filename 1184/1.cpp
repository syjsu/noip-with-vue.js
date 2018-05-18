#include<iostream>
using namespace std;
int n,i;
long long a;
int work(int a,int b){
	if((a<b)||(a<0)||(b<0))return 0;
	if((a==0)&&(b==0))return 1;
	return work(a-1,b)+work(a,b-1);
}
int main(){
	cin>>n;
	a=work(n,n);
	for(i=1;i<=n;i++){
		a*=i*i;
	}
	cout<<a;
	return 0;
}
