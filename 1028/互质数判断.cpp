#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int tmp=1;
	//求公约数
	for (int i=1;i<(min(a,b)+1);i++)
	{
		if((a%i==0) and (b%i==0)){
			if(i != 1){
				tmp=0;
				break;
			}
		}
	}
	if(tmp==1){
		cout<<"Yes"<<endl;
		return 0;
	}
	cout<<"No"<<endl;
	return 0;
} 
