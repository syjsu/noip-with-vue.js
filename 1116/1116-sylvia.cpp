#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define debug(x) cerr<<#x<<'='<<x<<endl
#define LL long long 
#define Maxn 123456

int A[Maxn];
int n,m;

bool judge(int mid){
	//debug(mid);
	int sum=0,l=1;
	for (int i=1;i<=n;i++){
		sum+=A[i];
		if (sum>mid){
			l++;
			sum=A[i];
		}
	}
	if (l>m) return false;
	  else return true;
}

int search(int low,int high){
	while (low<high){
		int mid=(low+high)/2;
		if (judge(mid)) high=mid;
		 else low=mid+1;
	}
	cout<<low<<endl;
}

int main(){
	cin>>n>>m;
	int summ=0,minn=-233;
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		summ+=A[i];
		minn=min(minn,A[i]);
	}
	search(minn,summ);
	return 0;
}
