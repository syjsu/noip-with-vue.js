#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
void ans(char x);
int main()
{
	char x;
	cin>>x;
	if(x=='Y') ans(x);
	return 0;
}
void ans(char x){
	string a;
	int i=0;
	int p=0;
	cin>>a;
	if(a=="NOIP@CCF"){
		p=1;
		cout<<"Success"<<endl;
	}
	else
	cout<<"Sorry"<<endl;
	if(p!=1){
	cin>>x;
	if(x=='Y') i++;
	if(i==1) ans(x);
	}
}
