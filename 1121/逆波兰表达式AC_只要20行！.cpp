#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

double dowith(){
	char s[1024];
	cin>>s;
	if(strcmp("+", s)==0) return dowith()+dowith();
	if(strcmp("-", s)==0) return dowith()-dowith();
	if(strcmp("*", s)==0) return dowith()*dowith();
	if(strcmp("/", s)==0) return dowith()/dowith();
	return atof(s);
}

int main(){
	printf("%lf",dowith());
	return 0;
}