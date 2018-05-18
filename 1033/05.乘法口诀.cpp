#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n=0,xh=0,lie=0,fun=0,cut;
	cin>>n;
	cut=n-1;
	for(xh=1;xh<=n;xh++){
		for(lie=1;lie<=n-cut;lie++){
			cout<<lie<<"*"<<xh<<"="<<xh*lie<<" ";
		}
		cout<<endl;
		cut--;
	}
	system("pause"); 
} 
