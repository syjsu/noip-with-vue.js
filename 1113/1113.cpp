#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	scanf("%s",c);
	int len=strlen(c);
	int left=0;
	int l[50];
	int x=0;
	for (int i=0;i<len;i++){
		if (!x){
			for (int j=0;j<50;j++) l[j]=0;
			l[0]=i;x=1;
			continue;
		}
		else{
			if (c[i]=='('){
				l[x++]=i;
				continue;
			}
			else{
				printf("%d %d\n",l[--x],i);
				l[x]=0;
			}
		}
	}
	return 0;
}
