#include <iostream>
#include <string>
using namespace std;


int main(){
	int n,sum=0;
	cin>>n;
	while(n){
		sum+=n%10;
		n=int(n/10);
	}
	cout<<sum;
	return 0;

}

