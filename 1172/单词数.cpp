#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=1;
	for(int i=0;i<s.size();i++)
	{
		ans=(ans*int(s[i]-'a'+1))%10007;
	}
	cout<<ans<<endl;
	return 0;
}
