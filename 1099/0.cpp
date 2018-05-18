#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
struct tSet  
{
	bool set[26];     
	void input()         
      { string s;
        cin>>s;
        memset(set,false,sizeof(set));
		for(int i=0;i<s.size();i++)
		    set[s[i]-'a']=true;
	  }   
    void output()       
      { 
		for(int i=0;i<26;i++)
		if(set[i]==true)        cout<<char(i+'a');
        cout<<endl;
	  }   
	tSet operator + (const tSet x)const  
      { tSet tmp;
	   for(int i=0;i<26;i++)
	   tmp.set[i]=set[i] || x.set[i];
	   return tmp;
	  }  
	tSet operator - (const tSet x)const  
      { tSet tmp;
	   for(int i=0;i<26;i++)
	   tmp.set[i]=set[i] && (!x.set[i]);
	   return tmp;
	  }    
	tSet operator * (const tSet x)const  
      { tSet tmp;
	   for(int i=0;i<26;i++)
	   tmp.set[i]=set[i] && x.set[i];
	   return tmp;
	  }	    
};
int N,k;
tSet A,B,C;
char op;
int main()
{
cin>>N; 
int MARK[N];
for(int i=1;i<=N;i++) 
{
	cin>>MARK[i];
	A.input();
	for(int j=2;j<=MARK[i];j++)
	{
	cin>>op;
	B.input();
	if(op=='+')A=A+B;
	if(op=='-')A=A-B;
	if(op=='*')A=A*B;
	
	}
	A.output();
} 
return 0;
}
