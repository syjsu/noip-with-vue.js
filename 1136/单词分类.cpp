#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream fin("ab.in");
int word[10001][27];
int sum;
void find(int i,int n){
	for(int q=i+1;q<n;q++){
		if(word[q][26]==1) continue;
		else{
			int w;
			for (w=0;w<26;w++){
				if(word[q][w]!=word[i][w]) break;
			}
			if (w==26)
			 word[q][26]=1;
		}
	}
	sum++;
	return;
}
int main(){
	int n;
	cin>>n;
	string a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		int as=a[i].size();
		for (int j=0;j<as;j++){
			word[i][a[i][j]-65]++;
		}
	}
	for(int i=0;i<n;i++){
		if(word[i][26]==0) find(i,n);
	}
	cout<<sum<<endl;
//    for (int i=0;i<n;i++){
//    	for (int j=0;j<27;j++){
//    		cout<<word[i][j]<<" ";
//		}
//		cout<<endl;
//	}
    return 0;
}
