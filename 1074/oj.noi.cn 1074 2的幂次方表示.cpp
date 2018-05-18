#include<bits/stdc++.h>
using namespace std;
/*
long long tentotwo(int a)
{
	if (a==0 || a==1) return a;
	if (a==2) return 10;
	int s[16],sum=0,i=0;
	while (a!=0)
	{
		i++;
		s[i]=a%2;
		a/=2;
	}
	for (int j=i;j>=1;j--)
	{
		sum*=10;2+2(0
		sum+=s[j];
	}
	return sum;
}
*/
string trans(int a)
{
	int i=a,j=0;
	string s="";
	if (a == 0) return "0";
	if (a == 1) return "2(0)";
	if (a == 2) return "2";
	while (i>0)
	{
		if (i%2==1)
		{
			string temp;
			if (j == 0) s+="2(0)";			
			if (j == 1) {
				temp = "2";
				if (s.empty()) 
				    s.insert(0,temp);
				else 
				    s.insert(0,temp+"+");
			}
					
			if (j > 1) 
			{
				temp = trans(j);
				if (s.empty()) 
				    s.insert(0,"2("+temp+")");
				else 
				    s.insert(0,"2("+temp+")+");
			}
		}
		i=i/2;
		j++;
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
//	cout<<tentotwo(n);
	cout<<trans(n);
}
