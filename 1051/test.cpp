#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>

using namespace std;

class STU{
	public:
		int sex;
		double tall;
}stu[500];

bool cmp1(STU a,STU b){
	return a.sex>b.sex;
}
bool cmp2(STU a,STU b){
	return a.tall<b.tall;
}
bool cmp3(STU a,STU b){
	return a.tall>b.tall;
}
void pstu(int n){
	int i;
	for(i=0;i<n;i++)
		cout<<fixed<<setprecision(2)<<stu[i].tall<<" ";//<<stu[i].tall<<endl;
}

int main(){
	int n,i,j,k=0;
	string sex;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>sex>>stu[i].tall;
		if(sex=="male") stu[i].sex=1;
		if(sex=="female") stu[i].sex=0;
	}	
	sort(stu,stu+n,cmp1);
	for(i=0;i<n;i++)
		if(stu[i].sex==1)k++;
	sort(stu,stu+k,cmp2);
	sort(stu+k,stu+n,cmp3);
	pstu(n);
	
	return 0;
	
}

