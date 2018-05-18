#include <iostream>
#include <string.h>
using namespace std;

int get_max(bool *book,int n){
	for(int i=n;i>0;i--){
		if(book[i])	return i;
	}
}
int get_min(bool *book,int n){
	for(int i=1;i<=n;i++){
		if(book[i])	return i;
	}
}
int main(){
	int n;
	cin>> n;
	if(n==2){
		cout << 2;
		return 0;
	}
	/*
	以下为n>=3的做法    n=2时手算即可 
	*/
	int *queue = new int[n];
	memset(queue,0,sizeof(queue));
	queue[0]=1;queue[1]=n;queue[n-1]=n-1;
	bool *book = new bool[n+1];
	for(int i=0;i<=n;i++)	book[i]=true;	
	book[1] = false;book[n]=false;book[n-1]=false;
	bool judge=false;
	int next=2,pre=n-2;
	for(int i=1;i<(n/2);i++){
		if(pre==next)	break;
		if(judge){
			int temp = get_max(book,n);
			queue[next] = temp;
			next++;
			book[temp] = false;
			temp = get_max(book,n);
			queue[pre] = temp;
			pre--;
			book[temp] = false;
			judge = false;
		}else{
			int temp = get_min(book,n);
			queue[next]= temp;
			next++;
			book[temp] = false;
			temp = get_min(book,n);
			queue[pre] = temp;
			pre--;
			book[temp] = false;
			judge = true;
		}
	}
	if(n%2==0){
		int g;
		for(int i=1;i<=n;i++){
			if(book[i])	g = i;
		}
		int index = n/2;
		queue[index]=g;
	}
	int sum = (queue[n-1]-queue[0])*(queue[n-1]-queue[0]);
	for(int i=1;i<n;i++){
		int result = queue[i] - queue[i-1];
		sum += (result*result);
	}
	cout << sum;
	return 0;
}