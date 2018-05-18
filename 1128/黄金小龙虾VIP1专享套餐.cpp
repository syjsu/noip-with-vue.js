#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<cstring>
#include<string>
using namespace std;
char fu[100000];
string s;
int num[100000];
int l,le,top;
int main(){
	getline(cin,s);
	l=s.length()-1;
	while(le<=l){
		if(s[le]=='+'||s[le]=='-'){
			top++;
			fu[top]=s[le];
			le=le+2;
		}else
		if(s[le]>='0'&&s[le]<='9'){
		    cout<<s[le]<<" ";
		    num[top]++;
		    le=le+2;
		}
		while (num[top]==2){
			num[top]=0;
			cout<<fu[top]<<" ";
			top--;
			num[top]++;
		}
		}
    return 0;
}
