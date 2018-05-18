#include <cstdio>
using namespace std;

int main() {
	int y,m;
	scanf("%d",&y);
	if (y%100 == 0 and y%400 == 0){
		scanf("%d",&m);
		if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)printf("31");
		else if (m == 2)printf("29");
		else printf("30");
	}
	else if (y%4 == 0 and y%100 != 0){
		scanf("%d",&m);
		if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)printf("31");
		else if (m == 2)printf("29");
		else printf("30");
	}
	else{
		scanf("%d",&m);
		if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)printf("31");
		else if (m == 2)printf("28");
		else printf("30"); 
	}
	return 0; 
}
