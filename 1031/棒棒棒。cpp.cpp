#include<iostream>
using namespace std;
int main()
{ 
    int n,j,i,p;
    cin>>n;
    for(i=0;i<2*n;i+=2){
    	for(j=0;j<(2*n-i-1)/2;j++)
    	    cout<<" ";
    	for(j=0;j<i+1;j++)
    	    cout<<"*";
    	for(j=0;j<(2*n-i-1)/2;j++)
        cout<<" ";
        cout<<endl;
    }
	return 0;
}

