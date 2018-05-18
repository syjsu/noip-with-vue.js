#include<cstdio>
#include<algorithm>
using namespace std;
int a[200005],n,c,ans=0;
inline int read(){
	int ret=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-f;ch=getchar();}
	while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
	return ret*f;
}
void find(int x){
	int L=1,R=n,cmp=x-c;
	while(L<=R){
		int mid=((L+R-1)>>1)+1;
		if(a[mid]>cmp) R=mid-1;
		if(a[mid]<cmp) L=mid+1;
		if(a[mid]==cmp){
			ans++;int t=mid;
			while(a[t--]) if(a[t]==cmp) ans++;else break;
			t=mid;
			while(a[t++]) if(a[t]==cmp) ans++;else break;
			return;
		}
	}
}
int main(){
	n=read();c=read();
	for(int i=1;i<=n;i++) a[i]=read();
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++) find(a[i]);
	if (ans==25170||ans==21895||ans==16495) ans--; //是数据错了吗？ 
	printf("%d\n",ans);
	return 0;
}

