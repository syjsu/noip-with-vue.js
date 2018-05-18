#include <iostream>
using namespace std;
int main(){
	int s,c=0;
	cin>>s;
    while(s>0){
    	c=s%10+c;
    	s=s/10;
	}
	cout<<c;
	return 0;
}
