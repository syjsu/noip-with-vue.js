#include <iostream>
#include <fstream>
using namespace std;
void change (int *a,int *b,int w){
	for (int i=0;i<w;i++){
		int  temp=b[i];
		b[i]=a[i];
		a[i]=temp;
	}
}
bool zhen(int *a,int *b,int w){
	for (int i=0;i<w;i++){
		if(a[i]<b[i]) {
		    change(a,b,w);
		    return false;
		}
		return true;
	}
}
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
	if(!zhen(aq,bq,w)) cout<<"-";
//	for (int i=0;i<w;i++){
//		cout<<aq[i];
//	}
//	cout<<endl;
//	for (int i=0;i<w;i++){
//		cout<<bq[i];
//	}
    for (int i=w;i>0;i--){
    	if (aq[i-1]<bq[i-1]){
    		ww[i]=aq[i-1]+10-bq[i-1];
    		aq[i-2]--;
		}else ww[i]=aq[i-1]-bq[i-1];
	}
	int r=0;
	if (ww[0]==0) r=1;
	if (ww[0]==0 and ww[1]==0) r=2;
	for (int i=r;i<=w;i++) cout<<ww[i];
	return 0;
}
