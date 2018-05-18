#include<bits/stdc++.h>
using namespace std;
int number[5005],mark[5005];
int main(){
	int people,pass;
	cin>>people>>pass;
	for (int i=1;i<=people;++i)
		cin>>number[i]>>mark[i];
	pass=pass*1.5/1;
	for (int i=1;i<=people;++i){
		for (int j=1;j<=people;++j){
			if (mark[j]<mark[j+1]){
				swap(mark[j],mark[j+1]);
				swap(number[j],number[j+1]);
			}
		}
	}
	int passpeople=pass;
	for (int j=pass+1;j<=people;++j)
		if (mark[j]==mark[pass]) passpeople++;
	cout<<mark[pass]<<' '<<passpeople<<endl;
	for (int i=1;i<=people;++i){
		for (int j=1;j<=people-i;++j){
			if (mark[j]==mark[j+1]&&number[j]>number[j+1])
				swap(number[j],number[j+1]);
		}
	}
	for (int i=1;i<=passpeople;++i)
		cout<<number[i]<<' '<<mark[i]<<endl;;
	return 0;
}
