#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int zs;
	char word;
	getline(cin,str);//读取数据 
	zs=str.length()-1;//获取字数 
	for(int j=0;j<=zs;j++)
	{
		word=str[j];
		if(isalpha(word))
		{
			word+=3;
			if(word<94)//确定大小写 
			{
				if (word>90)//超过范围 
					word=word-26;
			}
			else
			{
				if (word>122)//超过范围 
					word=word-26;
			}
		}
		str[j]=word;
	}
	cout<<str;
	return 0;
}


