#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
//const int maxn=505,maxl=2005;
//int n;
//struct Big_int{
//	int a[maxl],len;
//	Big_int(){memset(a,0,sizeof a);len=0;}
//	Big_int(int x){memset(a,0,sizeof a);len=0;while(x){a[len++]=x%10;x/=10;}}
//	Big_int operator +(const Big_int &b){
//		Big_int c;
//		c.len=max(len,b.len);
//		for(int i=0;i<c.len;i++){
//			c.a[i]+=a[i]+b.a[i];
//			c.a[i+1]+=c.a[i]/10;
//			c.a[i]%=10;
//		}
//		if(c.a[c.len+1]) c.len++;
//		return c;
//	}
//	Big_int operator *(const Big_int &b){
//		Big_int c;
//		c.len=len+b.len;
//		for(int i=0;i<len;i++){
//			for(int j=0;j<b.len;j++){
//				c.a[i+j]+=a[i]+b.a[i];
//				c.a[i+j+1]+=c.a[i]/10;
//				c.a[i+j]%=10;
//			}
//		}
//		if(c.a[c.len]) c.len++;
//		return c;
//	}
//	void write(){
//		bool flg=0;
//		for(int i=len;i>=0;i--){
//			if(a[i]||i==0) flg=1;
//			if(flg) printf("%d",a[i]);
//		}
//		putchar('\n');
//	}
//}f[maxn],three=3,two=2;
//int main(){
//	scanf("%d",&n);
//	f[1]=1;f[2]=1;f[3]=5;
//	for(int i=4;i<=n;i++){
//		Big_int t1=f[i-1]*three,t2=f[i-2]*two;
//		f[i]=t1+t2;
//	}
//	f[n].write();
//	return 0;
//}
const int maxn=5005;
int n,f[maxn],a[maxn],ans=-(1<<30);
int main(){
	for(int i=0;i<maxn;i++) f[i]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=i-1;j>=0;j--){
			if(a[j]<=a[i]&&f[i]<f[j]+1) f[i]=f[j]+1;
			if(f[i]>ans) ans=f[i];
		}
	}
	printf("%d",ans);
	return 0;
}
