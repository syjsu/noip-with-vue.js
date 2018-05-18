#include<iostream>
#include<algorithm>

using namespace std;



int main(){
	int n,i,j,k;
	int num[100][100]={};
	int col[100]={},row[100]={},cols=0,rows=0;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>num[i][j];
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n;j++)
			k+=num[i][j];
		row[i]=k%2;
		rows+=row[i];
		k=0;
		for(j=0;j<n;j++)
			k+=num[j][i];
		col[i]=k%2;	
		cols+=col[i];
	}
	if(cols==rows){
		if(cols == 0)
			cout<<"OK"<<endl;
		else if(cols == 1){
			for(i=0;i<n;i++){
				if(col[i]>0) cols=i;
				if(row[i]>0) rows=i;
			}
			cout<<rows+1<<" "<<cols+1<<endl;	
		}else{cout<<"Corrupt"<<endl;
		}
			
	}else
	cout<<"Corrupt"<<endl;
	
	return 0;
	
}

