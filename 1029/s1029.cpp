#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int zs;
	char word;
	getline(cin,str);//��ȡ���� 
	zs=str.length()-1;//��ȡ���� 
	for(int j=0;j<=zs;j++)
	{
		word=str[j];
		if(isalpha(word))
		{
			word+=3;
			if(word<94)//ȷ����Сд 
			{
				if (word>90)//������Χ 
					word=word-26;
			}
			else
			{
				if (word>122)//������Χ 
					word=word-26;
			}
		}
		str[j]=word;
	}
	cout<<str;
	return 0;
}


