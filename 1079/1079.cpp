#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int flag=1,i;
	string a;
	cin>>a;
	if(a[0]>='0' && a[0]<='9')
	{
		cout<<"no"<<endl;
		return 0;
	}
	
	int len=a.size();
	for(i=0;i<len;i++)
	{
		if(a[i]>='a' && a[i]<='z')
			continue;
		if(a[i]>='A' && a[i]<='Z')
			continue;
		if(a[i]>='0' && a[i]<='9')
			continue;
		if(a[i]=='_')
			continue;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		cout<<"no"<<endl;
	else if(flag==1 && i==len)
		cout<<"yes"<<endl;
	return 0;
}
