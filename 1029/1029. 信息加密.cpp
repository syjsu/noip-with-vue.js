#include<bits/stdc++.h>
using namespace std;
char a[40]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V'
,'W','X','Y','Z','A','B','C'};
char b[40]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'
,'w','x','y','z','a','b','c'};
int main(){
	string st;
	cin>>st;
	char ch;
	int x;
	for (int i=0;i<=st.size();++i){
		if (islower(st[i])){
			ch=st[i];
			x=st[i]-96;
			x=x+2;
			st[i]=b[x];
			
		}else if (isupper(st[i])){
			ch=st[i];
			x=st[i]-64;
			x=x+2;
			st[i]=a[x];
		}else{
			continue;
		}
	}
	cout<<st<<endl;
	return 0;
}

