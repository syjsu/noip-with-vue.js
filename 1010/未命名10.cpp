#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	scanf("%d",&a);
	if(a<=10) {
		printf("%.2lf",a*0.80+0.2);
	}
	else
	if(a<=20) {
		printf("%.2lf",(a-10)*0.75+8.2);
	}
	else
	if(a<=30) {
		printf("%.2lf",(a-20)*0.70+15.7);
	}
	else
		printf("Fail");
	
	return 0;
}
