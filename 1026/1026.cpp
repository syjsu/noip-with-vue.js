#include <cstdio>
using namespace std;
int main(){
int a[10],max=0,min=0,i;
	double s=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	s=s-max-min;
	s/=8;
	printf("%.3lf",s);
	return 0;
}
