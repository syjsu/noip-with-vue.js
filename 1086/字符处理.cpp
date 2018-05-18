#include <iostream>
#include <cstring>
using namespace std;
void init(char a[])
{
	string b;
	getline(cin,b);
	a[0]=b.length();
	for(int i=1;i<=a[0];i++)
		a[i]=b[i-1];
}
int main()
{
	int n=0,la,m=0;
	char a[10001];
	init(a);
	la=strlen(a);
	for(int i=1;i<=la;i++)
		if(a[i]=='.'||a[i]=='!'||a[i]=='?')
			n++;
	cout<<n<<endl;
	cout<<"  ";
	for(int i=1;i<=la;i++)
	{
		cout<<a[i];
		m++;
		if(m>=50)
		{
			cout<<endl;
			m=0;
		}
		if(a[i]=='.'||a[i]=='!'||a[i]=='?')
			cout<<endl<<"  "; 
	}
}
