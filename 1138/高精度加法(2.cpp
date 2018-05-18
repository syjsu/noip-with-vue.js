#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream fin("高精度加法.in");

int main(){
	string a,b;
	cin>>a>>b;
	int as=a.size(),bs=b.size();
	int aj=as-1,bj=bs-1,w=max(as,bs);
	int ww[w+1];
	int aq[w],bq[w];
	for (int i=0;i<=w+1;i++) ww[i]=0;
	for (int i=w-1;i>=0;i--){
		if(i>=w-as) aq[i]=a[aj]-48;
		else aq[i]=0;
		aj--;
	}
	for (int i=w-1;i>=0;i--){
		if(i>=w-bs) bq[i]=b[bj]-48;
		else bq[i]=0;
		bj--;
	}
//	for (int i=0;i<w;i++){
//		cout<<aq[i];
//	}
//	cout<<endl;
//	for (int i=0;i<w;i++){
//		cout<<bq[i];
//	}
	for (int i=w;i>0;i--){
		if (aq[i-1]+bq[i-1]+ww[i]>9){
			ww[i]=ww[i]+aq[i-1]+bq[i-1]-10;
			ww[i-1]++;
		}else ww[i]=ww[i]+aq[i-1]+bq[i-1];
	}
	int r=0;
	if(ww[0]==0) r=1;
	for (int i=r;i<=w;i++) cout<<ww[i];
	return 0;
}
