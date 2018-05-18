#include<cstdio>
#include<iostream>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<cmath>
using namespace std;
#define debug(x) cerr<<#x<<'='<<x<<endl
#define MAXN 654321

int N,Q;
int A[MAXN];
int s,y,l,v,a;

void binary_chop(int low,int high,int y){
	while (low<high){
		int mid=(low+high)/2;
		if (A[mid]>=y) high=mid;
		 else low=mid+1;
	}
	cout<<low<<endl;
}
int main(){
	cin>>N>>Q;
	cin>>s;
	A[1]=s-1;
	for (int i=2;i<=N;i++){
		scanf("%d",&s);
		A[i]=s+A[i-1];
	}
	for (int j=1;j<=Q;j++){
		scanf("%d",&y);
	 binary_chop(1,N,y);
    }	
    return 0;
}
	
	
