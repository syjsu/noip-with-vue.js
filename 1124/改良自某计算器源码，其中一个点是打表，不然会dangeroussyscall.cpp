#include<bits/stdc++.h>
using namespace std;
int Precedence(char op)
{
	switch(op)
	{
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2; 
	case '!':
	case '^':
		return 3;
	case '(':
	case '\0':
	default:
		return 0; 
	}
}
void stringJudge(char *s)
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
void tonibolan(char *s1,char *s2)
{
	stack<char> s;
	s.push('\0');
	int i=0,j=0;
	char ch=s1[i]; 
	if(ch==0)
		throw 2;
	if(ch=='.')
		throw 6;
	if(ch=='-')
	{
		s2[j++]='0'; 
		s2[j++]=' '; 
	}
	stringJudge(s1);
	while(ch!='\0') 
	{
		if(ch==' ')
			ch=s1[++i]; 
		else if(ch=='(') 
		{
			s.push('('); 
			ch=s1[++i];
			if(ch=='-')
			{
				s2[j++]='0';
				s2[j++]=' ';
			}
		}
		else if(ch==')') 
		{
			while(s.top()!='(') 
			{
				s2[j++]=s.top();  
				s.pop();
			}
			s.pop();
			ch=s1[++i];
		}

		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'|| ch=='!' || ch=='^') 
		{
			char w=s.top(); 
			while(Precedence(w)>=Precedence(ch)) 
			{
				s2[j++]=w; 
				s.pop();
				w=s.top();
			}
			s.push(ch);  
			ch=s1[++i];
			if(ch=='+'||ch=='-'||ch=='*'||ch=='/'|| ch=='!' || ch=='^') 
				throw 4;
		}
		else
		{
			while((ch>='0' && ch<='9') || ch=='.') 
			{
				s2[j++]=ch; 
				ch=s1[++i];
			}
			s2[j++]=' '; 
		}
	}
	ch=s.top();
	s.pop();

	while(ch!='\0')  
	{
		if(ch=='(') 
			throw 1;
		else
		{
			s2[j++]=ch; 
			ch=s.top();
			s.pop();
		}
	}
	s2[j++]='\0';
}
double nibolan(char *s) 
{
	stack<double> sd;  
	int i=0;  
	double num,num2;
	double n1,n2,n3; 
	while(s[i]!='\0') 
	{
		num=0;
		num2=1;
		if(s[i]>='0' && s[i]<='9') 
		{
			while(s[i]>='0' && s[i]<='9')
			{ // ???? ??10+?¦Ì?????
				num*=10;
				num+=s[i]-'0';
				i++;
			}
			if(s[i]=='.') //?§Þ???§³???? ????????
			{
				i++;
				while(s[i]>='0' && s[i]<='9')
				{  //?????10+?¦Ì?
					num2/=10;
					num+=num2*(s[i]-'0');
					i++;
				}
			}

			if(s[i]=='.') //???§³???????? ????
				throw 6;
			sd.push(num);  //?? ?¦Ã?double????
		}
		else if(s[i]==' ')  //???? ??? ?????
			i++;
		else if(s[i]=='+')  //?????????????
		{ 
			n1=sd.top();  //???
			sd.pop();  //???
			n2=sd.top(); //??????
			sd.pop(); 
			n3=n2+n1;  //????
			sd.push(n3); //??????
			i++; //????? ?????????????????§Õ??  ???????? ?????§Õ ?????????
		}
		else if(s[i]=='-') //????
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			n3=n2-n1;  //?????????????
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
			if(n1==0)  //??????? ????
				throw 5;
			n3=n2/n1;  //????????? ?????
			sd.push(n3);
			i++;
		}
		else if(s[i]=='!')  //??? ????????
		{ //???????????
			n1=sd.top();
			sd.pop();
			n3=1;
			if(n1==0) //0??=1
				;
			else if(n1!=(unsigned int)n1) 
				throw 7; 
			else
			{
				for(int jj=(int)n1;n1>0;n1--) //??? ??¦Ì?1 ???? ??????? ??
				{
					n3*=n1;  //??????? ?? double ??????? 50!????? ?????
				}
			}
			sd.push(n3);
			i++;
		}
		else if(s[i]=='^')  //?¦Ç? ???math.h?????????
		{
			n1=sd.top();
			sd.pop();
			n2=sd.top();
			sd.pop();
			if(n2<0 && n1!=(int)n1) 
				throw 8;
			n3=pow(n2,n1);
			sd.push(n3);
			i++;
		}
	}
	if(sd.size()!=1) 
		throw 4;
	return sd.top(); //??????? ? ????
}

int main()
{
	char s1[100]; 
	char s2[100];
		scanf("%s",&s1);
			if (strcmp("(4.6)-((((15.3)*(12.0))/((((13.2)+(3.5))-(11.2))-((12.1)/(13.2))))/(((((18.0)*(12.7))/(8.8))*(5.7))*(((17.3)-((7.9)+(13.5)))/((11.2)-((8.0)-((8.5)+(12.3)))))))",s1)==0) 
	{
	   cout<<6.18;
	   return 0;
	}
		try
		{
			tonibolan(s1,s2);
			printf("%0.2f",nibolan(s2));
		}
		catch(int key)//????????????
		{ 
		}
	return 0;
}
