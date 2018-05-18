#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	int a[1001];
	getline(cin,s);
	a[0]=s.size();
	for (int i=s.size()-1;i>=0;--i) a[i+1]=s[i]-'0';
	cout<<a[0]<<endl;
	for (int i=1;i<=s.size();++i) cout<<a[i]<<endl;
}
