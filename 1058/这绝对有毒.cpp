#include<iostream>
#include<string.h>
using namespace std;
char a[200];
char b[200];
int main()
{
	int s,i=0,l=0,ml=0,q=0;
	cin>>a;
   while(a[i]!='.')
	{
		if(a[i]=' ')
		{
			if(ml>=l)
            ml=l;   
			s=i-1;
			while(a[s]!=' ')
			{
				s--;
				}
			l=i-s;
			i++;
			}
		else  i++;
		}
	while(a[ml]!=' ')
	{
		b[q]=a[ml];
		ml--;
		q++;
		}
	for(int j=0;j<=q+1;j++)
	{
		cout<<b[j];
		}
	return 0;
} 
