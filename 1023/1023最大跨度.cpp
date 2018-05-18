#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n,x,xmax,xmin;
	cin>>n>>x;
	xmax=x;
	xmin=x;
	for(int i=1;i<n;i++){
		cin>>x;
		if (xmax<x) xmax=x;
		if (xmin>x) xmin=x;		
	}
	cout<<xmax-xmin;
	return 0;
}
