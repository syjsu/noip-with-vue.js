#include <iostream>
#include <algorithm>
using namespace std;

int step[99];
int MinSum[99];


int main()
{
	int a,b,next,go;

	int  n;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++)
	{
		MinSum[i]=-1;
		cin>>step[i];
	}
	
	if(a==b){
		cout<<0;
		return 0;
	}
	
		
	MinSum[a-1]=0;

	go=1;
	while(go)
	{
		go=0;
		for(int i=0;i<n;i++)
		{
//			cout<<i<<"---"<<step[i]<<endl;
			if(MinSum[i]==-1)
				continue;
			next=i-step[i];
//			cout<<i<<"-"<<step[i]<<endl;
			if(next>=0 && MinSum[next]==-1){
				MinSum[next]=MinSum[i]+1;
				go++;
//				cout<<next<<" "<<MinSum[next]<<endl;
			}
			next=i+step[i];
//			cout<<i<<"+"<<step[i]<<endl;
			if(next<=n && MinSum[next]==-1){
				MinSum[next]=MinSum[i]+1;
				go++;
//				cout<<next<<" "<<MinSum[next]<<endl;
			}		
		}
	}
		
	if(MinSum[b-1])
		cout<<MinSum[b-1];
	else
		cout<<-1;	
	return 0;
 } 
