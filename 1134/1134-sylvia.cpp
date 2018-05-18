#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define debug(x) cerr<<#x<<'='<<x<<endl
#define LL long long 
#define Maxn 654321

int A[Maxn];
int n,m,a,b;
int maxx=-23333,minn=23333;



bool judge(int mid){
	int time=0;
	for (int i=1;i<=n;i++){
		if(!((A[i]/a)<mid)||(A[i]/a==mid&&A[i] % a==0)){
			time+=(A[i]-a*mid)/b;
			if ((A[i]-a*mid)%b!=0) time++;

		}
		if (time>mid) return false;
	}
	return true;
}


void search(int low,int high){
	while (low<high){
		int mid=(low+high)/2;
		if (judge(mid)) high=mid;
		 else low=mid+1;
	}
	cout<<low<<endl;
}

int main(){
	cin>>n>>a>>b;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
		maxx=max(maxx,A[i]);
		//minn=min(minn)
	}
	maxx=maxx/a+1;
	search(0,maxx);
	return 0;
}
