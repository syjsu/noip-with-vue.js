#include<bits/stdc++.h>
using namespace std;
int b[101][101];
char a[101][101];
int main()
{
	int c,d,e;
	cin>>c>>d;
	for (int i=1;i<=c;++i)
		for (int j=1;j<=d;++j) cin>>a[i][j];
	for (int i=1;i<=c;++i)
		for (int j=1;j<=d;++j)
		{
			if(a[i][j]=='*')
			{
				b[i+1][j-1]++;b[i+1][j]++;b[i+1][j+1]++;//����һ��
				b[i][j-1]++;b[i][j]++;b[i][j+1]++;//�м�һ�� 
				b[i-1][j-1]++;b[i-1][j]++;b[i-1][j+1]++;//����һ�� 
			}
		}
	for (int i=1;i<=c;++i)
	{
		for (int j=1;j<=d;++j)
		{
			if (a[i][j]=='*') cout<<'*';
			else cout<<b[i][j];
		}
		cout<<endl;
	}
		return 0;
}
