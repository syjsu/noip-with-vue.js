#include<iostream>
using namespace std;

int main(){
	string x;
	cin>>x;
	cout<<x.length()<<endl;
	for(int i=0;i<x.length();i++)
	   cout<<int(x[i]-'0')<<endl;
	return 0;
}
