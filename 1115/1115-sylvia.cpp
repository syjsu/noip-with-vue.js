#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define debug(x) cerr<<#x<<'='<<x<<endl
#define LL long long 
#define Maxn 123456

LL A[Maxn];
LL n,m,k;
/*
5 8
1 2 3 4 9
1
-1
2
5
6
4
0
7
*/

 void search(LL low,LL high,LL k){
	if (k>A[high]||k<A[low]) {
		cout<<-1<<endl;
		return;
	}
	while (low+1<high){
		LL mid=(low+high)/2;
		if (A[mid]>=k) high=mid;
		 else low=mid;
	}
	if (A[high]==k)cout<<A[high]<<endl;
	  else cout<<A[low]<<endl;
	return;
}
int main(){ 
  cin>>n>>m;
  for (int i=1;i<=n;i++) scanf("%d",&A[i]);
  for (int i=1;i<=m;i++){
  	cin>>k;
  	search(1,n,k);
  }
  return 0;
}
