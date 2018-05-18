#include<iostream>
#include<algorithm>

using namespace std;

class STU{
	public:
		int id,yw,sx,yy,sum;
}stu[500];

bool cmp1(STU a,STU b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	if(a.yw!=b.yw)
		return a.yw>b.yw;
	else
		return a.id<b.id;
}

int main(){
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		stu[i].id=i+1;
		cin>>stu[i].yw>>stu[i].sx>>stu[i].yy;
		stu[i].sum=stu[i].yw+stu[i].sx+stu[i].yy;
	}
	sort(stu,stu+n,cmp1);
	for(i=0;i<5;i++)
		cout<<stu[i].id<<" "<<stu[i].sum<<endl;
	
	return 0;
	
}

