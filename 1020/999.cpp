#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,m,i=0,dao=0;
	cin>>x;
    m=x; 
	while (x!=0) {i++;x=x/10;}
	cout<<i<<endl;
	while (m!=0) {dao=dao*10+m%10;m=m/10;}
	while (dao!=0) {cout<<dao%10<<endl;dao=dao/10;}
	return 0;
}                                                                                                                                                     
