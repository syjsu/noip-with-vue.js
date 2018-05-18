#include<cstring>
#include<iostream>
using namespace std;
char a[1000];
int main(){
	int i;
	while(cin>>a){
		int len=strlen(a);
		if(a[0]>='0'&&a[0]<='9'){
			cout<<"no"<<endl;
			continue;
		}
		for(i=0;i<len;i++){
			if(a[i]>='a'&&a[i]<='z') continue;
			if(a[i]>='A'&&a[i]<='Z') continue;
			if(a[i]=='_') continue;
			if(a[i]>='0'&&a[i]<='9') continue;
			break;
		}
		if(i==len){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}