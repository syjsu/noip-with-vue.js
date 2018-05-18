#include<iostream>
#include<string>
using namespace std;
int Maxn;
string s1,s2;
void vince(int x,int y,int l)
{
	if(s1[x]!=s2[y])
	{
	   Maxn=l>Maxn?l:Maxn;
	   return;
}
  vince(x+1,y+1,l+1);
}
int main()
{
	while(cin>>s1>>s2)
	{
		Maxn=0;
		if(s1.size()==1||s2.size()==1)break;
		s1=s1+s1;
		s2=s2+s2;
		int i,j;
	    for(i=0;i<(s1.size())/2;i++)
		for(j=0;j<(s2.size())/2;j++) 
		if(s1[i]==s2[j])
		vince(i+1,j+1,1);  
		cout<<Maxn<<endl;
 }
 return 0;
}
