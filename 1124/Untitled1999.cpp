#include<stack>//ջ������ͷ�ļ�
#include<iostream>
#include<math.h> //��ѧ ͷ�ļ�  �η�����
#include<string.h>
#include<string>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int Precedence(char op)//��������ȼ��ж�
{
	switch(op)
	{
	case '+':
	case '-':
		return 1; //����Ӽ���������ȼ�Ϊ1
	case '*':
	case '/':
		return 2; //����˳���������ȼ�Ϊ2
	case '!':
	case '^':
		return 3;
	case '(':
	case '\0':
	default:
		return 0; //������ջ�е������ź�ջ���ַ������ȼ�Ϊ0
	}
}
void stringJudge(char *s)//�Ƿ��ַ��ж�  ��ʵ ����д �е�� Java�Ѿ�û������Ū��
{
	int i=0;
	while(s[i]!=0)
	{
		switch(s[i])
		{
		case'+':
		case'-':
		case'*':
		case'/':
		case'0':
		case'1':
		case'2':
		case'3':
		case'4':
		case'5':
		case'6':
		case'7':
		case'8':
		case'9':
		case'.':
		case'(':
		case')':
		case'!':
		case'^':
			break;
		default:
			throw 3;
		}
		i++;
	}
	return;
}
void tonibolan(char *s1,char *s2)//��׺ʽת��Ϊ�沨��ʽ
{
	stack<char> s;//��һ���ַ�ջ
	s.push('\0');//ջ���ַ�
	int i=0,j=0;//i��¼s1��j��¼s2
	char ch=s1[i]; //ȡ�׸�
	if(ch==0)//�ж��ַ����Ƿ��ǿյ�
		throw 2;
	if(ch=='.')//�ж����ַ��Ƿ�ΪС����
		throw 6;
	if(ch=='-')//������λ����
	{
		s2[j++]='0';  //����������ַ�����ֱ�Ӽ��˸�0   ע�� û�� ��ch���¸��ַ� �Ǹ����Ż���Ҫ�����
		s2[j++]=' ';  //�ո�Ϊ�˸��� ������
	}
	stringJudge(s1); //�ж� �Ƿ��ַ�
	while(ch!='\0')  //ջ���ַ� over
	{
		if(ch==' ') //�ո� �� ����
			ch=s1[++i]; //����һ��
		else if(ch=='(') //������ѹ��ջ��
		{
			s.push('('); //ѹջ
			ch=s1[++i];
			if(ch=='-')//������λ����
			{
				s2[j++]='0';
				s2[j++]=' ';
			}
		}
		else if(ch==')') //������ ��������֮���ȫ������ ���� д�� ������ط��ĵ� ���ȼ���
		{
			while(s.top()!='(') //ѭ���� �����Ŵ�  ��ʵ �и�bug  ���û�� �����ŵĻ�   �Լ�˼����
			{
				s2[j++]=s.top();  //��ջ
				s.pop(); //pop()��ɾ���Գ�ջ
			}
			s.pop(); //��� ɾ�� ��� ����
			ch=s1[++i];
		}

		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'|| ch=='!' || ch=='^') //��������Ļ�
		{
			char w=s.top();  //����һ��
			while(Precedence(w)>=Precedence(ch)) //�Ƚ����ȼ�
			{
				s2[j++]=w;  //ջ��Ĵ�Ļ� ջ�Ǹ�д��
				s.pop(); //������ջ   ����һ��ѭ��
				w=s.top();
			}
			s.push(ch);  //ѹ����ַ�
			ch=s1[++i];
			if(ch=='+'||ch=='-'||ch=='*'||ch=='/'|| ch=='!' || ch=='^') //�����ʾ ���ź������� ���� �׳��쳣 Java���Ǹ� ����������쳣 ����һ�ַ�ʽ�ж�
				throw 4;
		}
		else
		{
			while((ch>='0' && ch<='9') || ch=='.') //�����ֻ���С����
			{
				s2[j++]=ch;   //д������ַ�������׺ʽ��
				ch=s1[++i];
			}
			s2[j++]=' ';   //�ո� ���� ��
		}
	}
	ch=s.top();
	s.pop();

	while(ch!='\0')  //�����е�����ȡ�� д�� ��׺ʽ  '\0'��ջ���ַ�
	{
		if(ch=='(')  //˵���ж��( ���쳣
			throw 1;
		else
		{
			s2[j++]=ch;    //д��
			ch=s.top();
			s.pop();
		}
	}
	s2[j++]='\0';  //���� β�� �ַ���β
}
double nibolan(char *s) //������� �� ���� ���� ��׺ʽ��
{
	stack<double> sd;  //doubleջ
	int i=0;  //ѭ������ ����λ��
	double num,num2; //��ʱ�������������
	double n1,n2,n3; //ͬ��
	while(s[i]!='\0') //ѭ�� ��β
	{
		num=0;
		num2=1;
		if(s[i]>='0' && s[i]<='9') //��������� ����if�� String ��Ϊ double������ C++���Լ�д ���簡
		{
			while(s[i]>='0' && s[i]<='9')
			{ // ���� ��10+�µ�����
				num*=10;
				num+=s[i]-'0';
				i++;
			}
			if(s[i]=='.') //�м��С���� ֻ����һ��
			{
				i++;
				while(s[i]>='0' && s[i]<='9')
				{  //���ǳ�10+�µ�
					num2/=10;
					num+=num2*(s[i]-'0');
					i++;
				}
			}

			if(s[i]=='.') //˵��С������� ���쳣
				throw 6;
			sd.push(num);  //�� �γ�doubleѹ��ջ
		}
		else if(s[i]==' ')  //���� �ո� �ָ���
			i++;
		else if(s[i]=='+')  //���¶���һ����˼
		{ //������� ��ջ һ���������� Ȼ�� ���� ����� ѹջ
			n1=sd.top();  //��ջ
			sd.pop();  //ɾ��
			n2=sd.top(); //�ٳ�һ��
			sd.pop(); //��ɾ��  ��ʵc++������������ ���鷳 Java��һ������ ����Ҳɾ
			n3=n2+n1;  //����
			sd.push(n3); //���ѹջ
			i++; //��һ�� ��ʵ�����ٷ�֧������д��  �������� ÿ����д ��ʱû��ע�⵽
		}
		else if(s[i]=='-') //����
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			n3=n2-n1;  //ע�����ĸ����ĸ�
			sd.push(n3);
			i++;
		}
		else if(s[i]=='*')
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			n3=n2*n1;
			sd.push(n3);
			i++;
		}
		else if(s[i]=='/')
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			if(n1==0)  //����Ϊ�� ���쳣
				throw 5;
			n3=n2/n1;  //Ҳע�����Ǹ� ���ĸ�
			sd.push(n3);
			i++;
		}
		else if(s[i]=='!')  //�׳� �㷨������
		{ //�׳���ֻ��һ��
			n1=sd.top();
			sd.pop();
			n3=1;
			if(n1==0) //0��=1
				;
			else if(n1!=(unsigned int)n1) //doubleǿ��ת���޷���int������ԭ�������  Java���Դ��ķ��� ���껹���Լ���
				throw 7; //���� �ж� �׳�ǰ���� �Ƿ�Ϊ ������
			else
			{
				for(int jj=(int)n1;n1>0;n1--) //ѭ�� һ�μ�1 ���� �׳˵��˹� �㷨
				{
					n3*=n1;  //���ݴ��� �ᳬ double �����׵� 50!�ͻ��� ���Ƶ�
				}
			}
			sd.push(n3);
			i++;
		}
		else if(s[i]=='^')  //�η� �õ�math.h����ĺ���
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			if(n2<0 && n1!=(int)n1)  //����Ǵη�����ѧҪ�� �Լ�˼���� c++�Ĵη� ҲҪ���� ����
				throw 8;
			n3=pow(n2,n1);
			sd.push(n3);
			i++;
		}
	}
	if(sd.size()!=1)  //���ʣ�µ�Ԫ�� ����1�� ��˵�� �� ������ ���� ���쳣��
		throw 4;
	return sd.top(); //����ֵ Ϊ ��
}

int main()
{
	char s1[100]; //��󳤶��� �̶��� ��Ҳ��  �Լ����Ű�
	char s2[100];
	while(1)
	{
		gets(s1); //�ַ�����ʽ ����
		try
		{
			tonibolan(s1,s2);  //ת��׺ʽ
			cout<<nibolan(s2)<<endl;  //����
			cout<<endl; //����
			return 0;
		}
		catch(int key)//��������
		{ //�������� �Ƚϴ��ķ�ʽ ��ʵ����ֱ�����ַ��� ���� ������д��
			cout<<endl;
			if(key==1)
				cout<<"����ļ���ʽ������������������"<<endl;
			else if(key==2)
				cout<<"����ļ���ʽ�ǿյģ�����������"<<endl;
			else if(key==3)
				cout<<"�����ʽ�Ӻ��зǷ��ַ�������������"<<endl;
			else if(key==4)
				cout<<"�����ʽ�Ӹ�ʽ����ȷ������������"<<endl;
			else if(key==5)
				cout<<"0����������������ʽ��"<<endl;
			else if(key==6)
				cout<<"С������ִ�������ʽ��"<<endl;
			else if(key==7)
				cout<<"�׳˼��������ֻ��Ϊ������������ʽ��"<<endl;
			else if(key==8)
				cout<<"������С���η������壬����ʽ��"<<endl;
			cout<<endl;
		}
	}
	return 0;
}
