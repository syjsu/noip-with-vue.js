#include<iostream>
using namespace std;

string str;

int main(){
	cin>>str;
	if(str.find('h')!=-1&&str.find('a',str.find('h'))!=-1&&str.find('p',str.find('a',str.find('h')))!=-1&&str.find('y',str.find('p',str.find('a',str.find('h'))))!=-1)cout<<"Yes!";
	else cout<<"No!";
	return 0;
}
