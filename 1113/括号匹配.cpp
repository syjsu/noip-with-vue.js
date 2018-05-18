#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,k=48,j;
	string a;
	cin>>a;
	for(i=0;i<a.size() ;i++)
	{
		if(a[i]=='('){
			k++;
			a[i]=k;
		}
		if(a[i]==')'){
			a[i]=-k;
			k--;
		}	
	}
	for(j=0;j<a.size();j++)
	{
		for(i=j;i>=0;i--)
		if(a[i]==-a[j] && a[j]<0) {
			cout<<i
			<<" "<<j<<endl;
			break;
		}	
	} 
	return 0;
}
