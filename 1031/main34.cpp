#include <iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int r=1;r<n+1;r++){
		for(int c=1;c<r+1;c++){
			cout<<c<<"*"<<r<<"="<<c*r<<" ";
		}
		cout<<endl;
	}
	return 0;
}
