#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,p=0;
	for(i=0;i<s.length();i++)
		if(s[i]=='h'){p=1;break;}
	if(p==1)
	{
		p=0;
		for(;i<s.length();i++)
		if(s[i]=='a'){p=1;break;}
	if(p==1)
	{
		p=0;
		for(;i<s.length();i++)
		if(s[i]=='p'){p=1;break;}
	if(p==1)
	{
		p=0;
		for(;i<s.length();i++)
		if(s[i]=='p'){p=1;break;}
	if(p==1)
	{
		p=0;
		for(;i<s.length();i++)
		if(s[i]=='y'){p=1;break;}
	if(p==1) 
	{
		cout<<"Yes!";
		return 0;
	}
	}
	
	}
	
	}
	
	}
	cout<<"No!";
	return 0;
}
