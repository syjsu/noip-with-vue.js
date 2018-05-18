#include<cstdio>
#include<cmath>
using namespace std;
int s[10005],n,tot=0;
inline int read(){
	int ret=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-f;ch=getchar();}
	while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
	return ret*f;
}
bool check(int x){
	if(x==1) return 0;
	if(x==2) return 1;
	if(x%2==0) return 0;
	for(int i=3;i<=sqrt(x);i+=2){
		if(x%i==0&&x!=i) return 0;
	}
	return 1;
}
int main(){
	for(int i=1;i<=10000;i++){
		if(check(i)&&check(i+2)){
			s[++tot]=i;
		}
	}
	n=read();
	for(int i=1;i<=tot;i++){
		if(s[i]+2<=n){
			printf("%d %d\n",s[i],s[i]+2);
		}
	}
	if(s[1]+2>n) printf("empty\n");
	return 0;
}
