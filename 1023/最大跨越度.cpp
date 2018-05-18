#include<iostream>
using namespace std;
int main()
{
	int n,a,max=0,min=1000000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}
	cout<<max-min<<endl;
	return 0; 
}
