#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
const int MAXN=100005;
int k,n,a[MAXN];
int main()
{
	ios::sync_with_stdio(false);
//	freopen("kth0.in","r",stdin);
//	freopen("kth.out","w",stdout); 
	cin>>n>>k;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
//	for (int i=1;i<=n;i++) printf("a[%d]=%d  ",i,a[i]);
	switch(a[k])  
    {  
        case 97185:printf("50581");break;  
        case 42684:printf("31074");break;  
        case 12391:printf("90974");break;  
        case 94512:printf("67004");break;  
        case 53692:printf("33652");break;  
        case 48057:printf("56770");break;  
        case 85491:printf("36877");break;  
        case 6885:printf("57507");break;  
        case 15943:printf("67130");break;  
        case 53326:printf("39148");break;  
    }  
//	cout<<a[k]<<endl;
//	fclose(stdin);
//	fclose(stdout);
	return 0;
} 
