#include <iostream>
using namespace std;
struct nn{
	int data;
	struct nn* next;
};
int sum;
void insert(nn *head,nn*p){
	nn *q;
	q=new(nn);
	q=head;
	if(q->next==NULL){
		q->next=p;
		return;
	}else{
		while(q->next->data<p->data){
			q=q->next;
			if(q->next==NULL){
				q->next=p;
				return;
			}
		}
		p->next=q->next;
		q->next=p;
	}
	return;
}
int main(){
	nn *head;
	head=new(nn);
	head->data=0;
	head->next=NULL;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		nn *p;
		p=new(nn);
		cin>>p->data;
		p->next=NULL;
		insert(head,p);
	}
	nn *o;
	o=new(nn);
	o=head->next;
	int c[5];
	c[4]=0;
	int j=0;
	for (int i=0;i<n;i++){
		if(o->data<=m){
			c[j]=o->data;
			j++;
		}
		if(j>3) break;
		o=o->next;
	}
	for(int i=0;i<4;i++){
//		cout<<c[i]<<"   ";
	}
	int mm=m;
	for(int j=0;j<4;j++){
		int e=m/c[j];
		sum=sum+c[j]*e;
		m=c[j]*e;
		if(sum+c[j+1]>mm) break;
	}
	cout<<sum;
}
