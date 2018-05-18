#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;
const int MAXN=10001;
int n,a[MAXN],i,x;
float d;
int main(){
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(x=1;x<=i;x++){
	d=d+a[x];}
	cout<<fixed<<setprecision(2)<<d/n<<endl;
	return 0;
}
