#include<iostream>
using namespace std;
int main(){
	int n,i,x=0;
	cin>>n;
	for (i=3;i<n-2;i++){
		bool ok=1;
		for (int j=2;j<i;j++){
			if (i%j==0)
			ok=0;
		}
		if (ok){
			bool ok=1;
			for (int j=2;j<i+2;j++){
				if ((i+2)%j==0)
				ok=0;
			}
			if (ok){
				cout<<i<<" "<<i+2<<endl;
				x++;
			}
		}
	}
	if (x==0)
	cout<<"empty"<<endl;	
return 0;
}

