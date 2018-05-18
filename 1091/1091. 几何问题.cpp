#include <iostream>
using namespace std;

struct ck{
	char a;
	int p;
	int q;
	int bian;
};

ck tu[110];
int k[110];

int main(){
	int i,j;
	int n,m,x;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>tu[i].a;
		if(tu[i].a=='R')
			cin>>tu[i].p>>tu[i].q;
		else
			cin>>tu[i].p;
		tu[i].bian=i;
	}
	for(i=1;i<=m;i++){
		cin>>k[i];
	}
	for(i=1;i<=m;i++){
		if(tu[k[i]].a=='T')
			cout<<"Triangle "<<tu[k[i]].p<<endl;
		if(tu[k[i]].a=='R')
			cout<<"Rectangle "<<tu[k[i]].p<<" "<<tu[k[i]].q<<endl;
		if(tu[k[i]].a=='C')
			cout<<"Circle "<<tu[k[i]].p<<endl;
	}
	return 0;
}
