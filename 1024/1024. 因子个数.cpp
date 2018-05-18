#include<iostream>
#include<cmath>
int main(){
	int n,cnt=0;
	cin>>n;
	const int f=sqrt(n);
	for(int i=1;i<=f;i++)if(n%i==0){
		if(n/i!=i)cnt++;
		cnt++;
	}
	cout<<cnt;
	return 0;
}
