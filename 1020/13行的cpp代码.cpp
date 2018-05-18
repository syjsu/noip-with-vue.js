#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	if(a.size()<=4)
	{
		cout<<a.size()<<endl;
	    for(int i=0;i<a.size();++i) cout<<a[i]<<endl;
	}
}
