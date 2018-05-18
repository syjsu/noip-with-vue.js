#include<iostream>
using namespace std;
struct node
{
	int number;
	node *next;
};
int road[1000001];
node *head[100001],*rear[100001];
int add(int c1,int c2)
{
    node *p=new node;
	p->next=NULL;
	p->number=c2;
	if(head[c1]==NULL)
	{
		head[c1]=p;
		rear[c1]=p;
	}
	else
	{
		rear[c1]->next=p;
		rear[c1]=p;
	}
}
int main()
{
	int N,M;
	int c1,c2;
	cin>>N>>M;
	for(int i=1;i<=M;i++)
	{
	    cin>>c1>>c2;
	    add(c1,c2);
	    add(c2,c1);
	}
	for(int i=1;i<=N;i++)
	{
		while(head[i]!=NULL)
		{
			cout<<head[i]->number<<' ';
			head[i]=head[i]->next;
		}
		cout<<endl;
	}
}
