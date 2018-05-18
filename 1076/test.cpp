#include<iostream>

using namespace std;

char js(int x,int m){
	int i;
	char s;
	if(x!=0) {
		s=js(x/m,m);
		if(s!='\0') cout<<s;
	}
	i=x%m;
	//48 - 57  是ascII中的0-9,65-90是A-Z,97-122是a-z 
	if(x==0) return 0;
	if(i>9){
		return 65-10+i;
	}else{
		return 48+i;
	}
}


int main(){
	int x,m;
	cin>>x>>m;
	cout<<js(x,m);
	
	return 0;
	
}
