#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	char s[4][120];
	int b[26]={0};
	for(int i=0;i<4;i++){
        gets(s[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<strlen(s[i]);j++){
			if(s[i][j]>='A'&&s[i][j]<='Z'){
			    b[s[i][j]-'A']++;
			}
		}
	}
	int max=0;
	for(int i=0;i<26;i++){
	    if(b[i]>max){
			max=b[i];
		}
	}

	for(int i=max-1;i>=0;i--){
		for(int j=0;j<26;j++){
			if(i<b[j]){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	for(int i=65;i<=90;i++){
		cout<<(char)i<<" ";
	}
	return 0;
}
