#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,w;
	cin>>m>>w;
	if(m+w<10) cout<<"water";
	else if(m>w) cout<<"tree"; 
		 else cout<<"tea"; 
	return 0;
}
