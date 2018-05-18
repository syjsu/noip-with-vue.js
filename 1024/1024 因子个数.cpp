#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	unsigned long long n;			//输入数字 
	double len; 
	long long ans=0;
	bool flag=0;					//0,完全平方数；1,不完全平方数 
	cin>>n;
	len=sqrt(n);
	if(len-(int)len!=0)				//完全平方数判断 
		flag=1;
	for(unsigned long long q=1;q<(int)len;q++){
		if(n%q==0)
			ans+=2;
	}
	if(n%(int)len==0 && flag==1)
		ans+=2;
	if(n%(int)len==0 && flag==0)
		ans++;
	cout<<ans;
	return 0;
}
