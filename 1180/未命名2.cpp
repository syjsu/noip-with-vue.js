#include <iostream>
#include <cmath>
using namespace std;
long long int f[1001];
int main(){
	f[2]=1;
	f[3]=1;
	int n;
	cin>>n;
	
	n=n+2;
	for(int i=4;i<=n;i++){
		for(int j=2;j<=n-1;j++){
			//cout<<"f[i]="<<f[i]<<" f[j]="<<f[j]<<" f[i-j+1]="<<f[i-j+1]<<" i-j+1="<<i<<"-"<<j<<"+1="<<i-j+1<<endl;
			f[i]=f[i]+f[j]*f[i-j+1];
			
		}
	}
	cout<<f[n]<<endl;

	return 0;
}

