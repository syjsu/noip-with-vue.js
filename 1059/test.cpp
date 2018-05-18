#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(){
	char str[240];
	char *p;
	const char *split="+";
  	int sum=0,m,n;
	cin>>str;
	p=strtok(str,split);
	while(p!=NULL){
		m=atoi(p);
		sum+=m;
		p=strtok(NULL,split);
	}	
	cout<<sum<<endl;
	
	return 0;
}
