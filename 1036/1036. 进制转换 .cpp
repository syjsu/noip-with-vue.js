#include<iostream>
using namespace std;
int main()
{
	int n,b;
	cin>>n;
	while(n!=0)
	{
		b=n%2;
		n/=2; 
		cout<<"shang:"<<n<<" yu:"<<b<<endl; 
	}
	return 0;
}
