//by fcz
#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
struct tPlayer
{
	char name[105];
	int time;
};
tPlayer result[105];
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>result[i].name>>result[i].time;
	  for(int i=n;i>0;i--)
	  for(int j=1;j<i;j++)
	    if(result[j].time>result[j+1].time)
	    swap(result[j],result[j+1]);
	    //for(int i=1;i<=n;i++)cout<<result[i].name<<" ";
	cout<<result[k].name<<endl;
	return 0;
}
