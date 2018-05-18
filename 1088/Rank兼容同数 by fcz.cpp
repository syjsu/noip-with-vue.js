//by fcz
#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct tNumber
	{
	   	int Num;//值;
		int Rank;//rank值（排序后下标） 
		int Add; //排序前下标 
	};
tNumber a[10005];
bool cmpNum(tNumber x,tNumber y)
{
	return x.Num<y.Num;
}
bool cmpAdd(tNumber x,tNumber y)
{
	return x.Add<y.Add;
}
int main()
{
	int j=0;
	cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i].Num;
	 	a[i].Add=i;
	 }
	 sort(a,a+n,cmpNum);
	 for(int i=0;i<n;i++)
	 {
	  j++;
	  if(i&&a[i].Num==a[i-1].Num)j=a[i-1].Rank;
	  a[i].Rank=j;
}
	 sort(a,a+n,cmpAdd);
	 for(int i=0;i<n;i++)
	   cout<<a[i].Rank<<" ";
	cout<<endl;
	return 0;
}
