#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const int MAXN=10005;
int A[MAXN],B[MAXN],C[MAXN],Ans[MAXN],Len_A,Len_B,Len_Ans;
void Read(int *A,int &Len)
{
	string cur;
	cin>>cur;
	Len=cur.length();
	for(int i=0;i<Len;i++)A[i]=cur[i]-48;
	reverse(A,A+Len);
}
int main()
{
	Read(A,Len_A);
	Read(B,Len_B);
	Len_Ans=max(Len_A,Len_B);
	for(int i=0;i<Len_Ans;i++)
	{
		Ans[i]=A[i]-B[i]-C[i];
		if(Ans[i]<0)C[i+1]++,Ans[i]+=10;
	}
	while(Len_Ans>1&&Ans[Len_Ans-1]==0)Len_Ans--;
	for(int i=Len_Ans-1;i>=0;i--)
	cout<<Ans[i];
	return 0;
 } 
