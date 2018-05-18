#include <iostream>
using namespace std;
bool t;
string s;
int p;
int k(int x){
	if (p<0) t=false;
	else s.erase(0,p);
}
int main (){
	int n;
	cin>>s;
	t=true;
	n=s.size();
	p=s.find('h',0);
	k(p);
	n=s.size();
	p=s.find('a',0);
	k(p);
	n=s.size();
	p=s.find('p',0);
	k(p);
	n=s.size();
	p=s.find('p',0);
	k(p);
	n=s.size();
	p=s.find('y',0);
	k(p);
	if (t) cout<<"Yes!";
	else cout<<"No!";
	return 0;
}
