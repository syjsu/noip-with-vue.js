#include <bits/stdc++.h>
using namespace std;
int main(){
	int choose_number;
	switch(scanf("%d",&choose_number),choose_number/10){
		case 9:{
			printf("Excellent");
			break;
		} 
		case 8:{
			printf("Good");
			break;
		}
		case 6:case 7:{
			printf("Pass");
			break;
		}
		case 1:case 2:case 3:case 4:case 5:{
			printf("Fail");
			break;
		}
	}
	return 0;
}
