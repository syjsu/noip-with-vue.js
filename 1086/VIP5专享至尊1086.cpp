#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<string.h>
using namespace std;
string a;
int num,n,m,l;
bool f=false;
int main(){
	getline(cin,a);
	m=a.length()-1;
	for(int i=0;i<=m;i++){
		if(!f&&a[i]==' ') a[i]='@';
		if(!f&&a[i]!=' '&&a[i]!='@') f=true;
		if(f&&a[i]=='.') f=false;
		if(f&&a[i]=='?') f=false;
		if(f&&a[i]=='!') f=false;
	}
	//for(int i=0;i<=m;i++) cout<<a[i];
	for(int i=0;i<=m;i++) if(a[i]=='.'||a[i]=='?'||a[i]=='!') n++;
	cout<<n<<endl;
	cout<<"  ";
	num=2;
	for(int i=0;i<=m;i++)
	if(a[i]!='@'){
		if(num==50){
			cout<<endl;
			num=0;
		}
		if(a[i]=='.'||a[i]=='?'||a[i]=='!'){
			cout<<a[i];
			cout<<endl;
			cout<<"  ";
			num=2;
			}else{
		num++;
		cout<<a[i];
	}
	}
	return 0;
}
