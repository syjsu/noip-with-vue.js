#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
	int N,M,R,C;
	scanf("%d%d%d%d",&N,&M,&R,&C);
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			int x;
			scanf("%d",&x);
			
			a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+x;
		}
	}
	
	int ans=0;
	for(int i=1;i+R-1<=N;i++){
		for(int j=1;j+C-1<M;j++){
			ans=max(ans,a[i+R-1][j+C-1]
					   -a[i-1][j+C-1]
					   -a[i+R-1][j-1]
					   +a[i-1][j-1]);
		}
	}
	
	cout<<ans<<endl;
	return 0;
}

