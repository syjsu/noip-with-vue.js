#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int x[27];char z[401][401];int maxn=0;
void i(string n)
{
	for(char j='A';j<='Z';j++)
    {
    	for(int i=0;i<n.size();i++)
    	{
    		if(n[i]==j)
    		{
    			x[int(j-'A')]++;
			}
		}
	}
	
}
int main()
{
	string a,b,c,d;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	getline(cin,d);
    i(a);i(b);i(c);i(d);
//    for(int f=0;f<26;f++)
//	{
//		cout<<x[f]<<" ";
//		
//	}cout<<endl;
    for(int g=0;g<26;g++)
    {
    	if(x[g]>maxn)
    	{
    		maxn=x[g];
		}
	}
	int k=maxn;
	for(int o=0;o<maxn;o++)
	{
		for(int j=0;j<26;j++)
		{
			if(x[j]>=k)
			{
				z[o][j]='*';
			}
			else 
			{
				z[o][j]=' ';
			}
		}
		--k;
	}
	for(int p=0;p<maxn;p++)
	{
		for(int l=0;l<26;l++)
		{
			printf("%c ",z[p][l]);
		}
		printf("\n");
	}
	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
	return 0;
}
