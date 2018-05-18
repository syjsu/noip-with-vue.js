#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a[10100];
bool b[10100];
int me[10100];
int main(){
	int n,x,i=0;
	int z=1;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(me,0,sizeof(me));
	while(i<n){
		scanf("%d",&x);
		b[x]=1;
		a[i]=x;
		i++;
	}
	for(i=0;i<10100;i++){
		 if(b[i]){
				me[z]=i;
				z++;
		}
	}
	for(i=0;i<n;i++){
		for(int y=1;y<z;y++)
		if(me[y]==a[i])
		printf("%d ",y);
	}
	
	return 0;
}
