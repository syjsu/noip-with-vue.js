#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long int n,s;
	while(scanf("%ld",&n)!=EOF){
		s=1;
		while(n!=1){
			if (n%2==0) n=n/2;
			else n=3*n+1;
			s++;
		}
		printf("%ld\n",s);
	}
}