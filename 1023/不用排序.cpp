#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int a,m,mi;
	cin>>a;
	cin>>a;
	m=mi=a;
	while ( cin>>a ) {
		if(a>m)
			m=a;
		if(a<mi)
			mi=a;
	}

	cout<<m-mi;
}
