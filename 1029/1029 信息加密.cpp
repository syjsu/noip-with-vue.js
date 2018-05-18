#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char T[105];

int main()
{
	cin>>T;
	int len=strlen(T);
	for(int q=0;q<len;q++){
		if((T[q]>='A' && T[q]<='Z') || (T[q]>='a' && T[q]<='z')){
			if((T[q]>='A' && T[q]<'X') || (T[q]>='a' && T[q]<'x')){
				char a=T[q]+3;
				cout<<a;
			}
			else{
				switch(T[q]){
					case 'X':	cout<<"A";	break;
					case 'Y':	cout<<"B";	break;
					case 'Z':	cout<<"C";	break;
					case 'x':	cout<<"a";	break;
					case 'y':	cout<<"b";	break;
					case 'z':	cout<<"c";	break;
				}
			}
		}
		else
			cout<<T[q];
	}
	return 0;
}
