#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	const char total = 'a'+'z';
	if(argc != 2){
		exit(EXIT_FAILURE);
	}
	printf("%c\n",total - *argv[1]); 
	exit(EXIT_SUCCESS);
}
