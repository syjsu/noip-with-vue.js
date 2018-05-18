#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s;
	bool k=1;
	int i;
	getline(cin,s);
	if(s[0]>='0' && s[0]<='9') k=0;
	for(i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z') ;
		else if(s[i]>='A' && s[i]<='Z') ;
		else if(s[i]>='0' && s[i]<='9') ;
		else if(s[i]=='_') ;
		else k=0;
	}
	if(k) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
