#include<iostream>
#include<cstring>
using namespace std;
string re,a,b;
int main(){
	int i,j,k;
	cin>>a;
	re=a;
	cin>>a;
	if(a.size()>re.size() )
	{
		while(a.size()!=re.size() )
		{
			re+="0";
			for(i=re.size()-2;i>=0;i--)
			{
				re[i+1]=re[i];	
			}
			re[0]='0';
		}
	}
	if(a.size()<re.size() ) 
	{
		while(a.size()!=re.size() )
		{
			a+="0";
			for(i=a.size()-2;i>=0;i--)
			{
				a[i+1]=a[i];	
			}
			a[0]='0';
		}
	}
	for(i=0;i<re.size();i++)
		re[i]-=48;
	for(i=0;i<a.size();i++)
		a[i]-=48;
	for(i=a.size()-1;i>=0;i--)
	{
		re[i]-=a[i];
		if(re[i]<0)
		{
			re[i]+=10;
			re[i-1]--;
		} 
		if(i==0 && re[i]==0)
		{
			for(j=0;re[j]==0;j++){}
			re.erase(0,j);
		}
	}
	for(i=0;i<re.size();i++)
	{
		cout<<(int)re[i]<<""; 
	}
	cout<<endl;
	return 0;
}
