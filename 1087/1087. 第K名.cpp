#include<bits/stdc++.h>
using namespace std;
string name[105];
int mark[105];
int main(){
	int people,luck;
	cin>>people>>luck;
	for (int i=1;i<=people;++i)
		cin>>name[i]>>mark[i];
	for (int i=1;i<=people;++i){
		for (int j=1;j<=people-i;++j){
			if (mark[j]>mark[j+1]){
				swap(mark[j],mark[j+1]);
				swap(name[j],name[j+1]);
			}
		}
	}
	cout<<name[luck]<<endl;
	return 0;
}

