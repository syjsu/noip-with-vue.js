#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int len,lena=201;
	string a,b,c;
	do{
		cin>>a;
		len=a.size();
		c=a[len-1];
		if(c==".") {len--;a.erase(len,1); }
		if(len<lena) {
			b=a;
			lena=len;
		}
	}while(c!= ".");
	cout<<b;
	return 0;
}
