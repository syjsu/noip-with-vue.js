/*����
����һ�������ÿո������������a,b,c����ʾ�����ε������߳���
���
�����Ӧ�����ε����ͣ�������ܹ��������Σ������NO�������
�ǵȱ������������Equilateral���������ֱ�������������Right����
�����������������General����
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,c;
cin>>a>>b>>c;
if(a>b)
	swap(a,b);
if(b>c)
	swap(b,c);
if(a>b)
	swap(a,b);


if((a+b)>c)
	{
	
	if(a==b&&b==c)
		{
		cout<<"Equilateral"<<endl;
		return 0;
		}
	
	if(a*a+b*b==c*c)
		{
		cout<<"Right"<<endl;
		return 0;
		}
	
	cout<<"General"<<endl;
	
	return 0;
	}

else
	cout<<"NO";
	
return 0;
}
