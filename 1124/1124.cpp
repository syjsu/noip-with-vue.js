#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 1000

struct save1
{
    float n[MAX];
    int top;
}stack1;

struct save2
{
    char n[MAX];
    int top;
}stack2;

bool stackempty(save1 s)
{
    if (s.top== -1)
        return 1;
    else
        return 0;
}

bool stackempty2(save2 s)
{
    if (s.top== -1)
        return 1;
    else
        return 0;
}

void push(save1 &s,float e)
{
    if(s.top==MAX-1)
    {
        printf("栈已满!/n");
        return ;
    }
    s.top++;
    s.n[s.top]=e;
}

void push2(save2 &s,char e)
{
    if(s.top==MAX-1)
    {
        printf("栈已满!/n");
        return ;
    }
    s.top++;
    s.n[s.top]=e;
}

void pop(save1 &s,float &e)
{
    if(s.top==-1)
    {
        printf("栈为空!/n");
    }
    else
    {e=s.n[s.top]; s.top--; }
}

void pop2(save2 &s,char &e)
{
    if(s.top==-1)
    {  printf("栈为空!/n"); }
    else
    {e=s.n[s.top]; s.top--; }
}

int in(char e)
{
    if(e=='-' || e=='+') return 2;
    if(e=='*' || e=='/') return 4;
    if(e=='^') return 5;
    if(e=='(') return 0;
    if(e==')') return 7;
    return -1;
}

char precede(char ch1,char ch2)
{
    char op[]="+-*/()^";
    int i;
    int j;
    char table[7][8]={
        
        "<<<<><<",
        "<<<<><<",
        ">><<><<",
        ">><<><<",
        ">>>>>=>",
        "<<<<=<<",
        ">>>>><>"
    };
    for (i=0; i<7; i++) if(op[i]==ch2)break;
    for (j=0; j<7; j++) if(op[j]==ch1)break;
    return table[i][j];
}

int out(char e)
{
    if(e=='-' || e=='+') return 1;
    if(e=='*' || e=='/') return 3;
    if(e=='^') return 6;
    if(e=='(') return 7;
    if(e==')') return 0;
    return -1;
}

void count(float a,char ope,float b)
{
    float sum;
    if(ope=='+') sum=a+b;
    if(ope=='-') sum=a-b;
    if(ope=='*') sum=a*b;
    if(ope=='/') sum=a/b;
    if(ope=='^') sum=pow(a,b);
    push(stack1,sum);
}

bool isdigit(char a)
{
    if('0'<=a && a<='9')
        return 1;
    else
        return 0;
}

bool isalpha(char c)
{
    if (('a'<=c && c<='z') ||('A'<=c && c<='Z')) {
        return 1;
    }
    return 0;
}
int main()
{
    int i=0,len=0,j,nofpoint,g=0;
    float a,b;
    char line[MAX],operate,temp[20];
    scanf("%s",line);
    while (line[len++]!='\0');
  
    len--;
    stack1.top=-1;
    stack2.top=-1;
    while(1)
    {
        g=0;
        if('0'<=line[i] && line[i]<='9')
        {
            j=0; g=1;
            nofpoint=0;
            while(('0'<=line[i] && line[i]<='9') || line[i]=='.')
            {
                if(line[i]=='.') nofpoint++;
                temp[j++]=line[i];
                i++;
                if(i>=len) break;
            }
            if( nofpoint>1 || (i<len&&(line[i]!='-' && line[i]!='+' && line[i]!='*' && line[i]!='/' && line[i]!='^' && line[i]!=')')) )
            { printf("表达式有错\n"); return 0; }
            
            temp[j]='\0';
            b=atof(temp);
            push(stack1,b);
            if(i>=len) break;
        }
        else
        {
            if(line[i]=='-' || line[i]=='+' || line[i]=='*' || line[i]=='/' ||
               line[i]=='^' || line[i]=='(' || line[i]==')' ) 
            {
                g=1;
                if(line[i]=='(' && i==len) { printf("表达式有错\n"); return 0; }
                if(line[i]=='-' || line[i]=='+' || line[i]=='*' || line[i]=='/' || line[i]=='^')
                {
                    if(i==len) { printf("表达式有错\n"); return 0; }
                    if( (!isdigit(line[i+1])) && (!isalpha(line[i+1])) && line[i+1]!='(')
                    { printf("表达式有错\n"); return 0; }
                }
                
                if(line[i]=='-' && (i==0 || line[i-1]=='(' ))
                {
                    push(stack1,0);
                    push2(stack2,line[i]);
                    i++;
                }
                else
                { 
                    if(in(stack2.n[stack2.top])<out(line[i])||stackempty2(stack2))
                    
                    {
                        push2(stack2,line[i]);i++;
                    }
                    else
                        if(in(stack2.n[stack2.top])==out(line[i]))
          
                        {
                            i++; stack2.top--;
                        }
                        else 
                            if(in(stack2.n[stack2.top])>out(line[i]))
                           
                            { 
                                pop(stack1,a); 
                                pop(stack1,b); 
                                pop2(stack2,operate); 
                                count(b,operate,a); 
                            } 
                    if(i>=len) break; 
                } 
            } 
            else 
            { 
                if(isalpha(line[i]))
                { 
                    g=1; 

                    while( isalpha(line[i])) { printf("%c",line[i]); i++; }
  
                    scanf("%f",&b);
                    push(stack1,b); 
                    if(i>=len) break; 
                    if(line[i]!='-' && line[i]!='+' && line[i]!='*' && line[i]!='/' && line[i]!='^' && line[i]!=')')//变量后面跟的不是“+、-、*、/、^、)”，则为错误 
                    { printf("表达式有错\n"); return 0; }
                }
            } 
        } 
        if(g==0) { printf("表达式有错\n"); return 0; }
    } 
    
    while(stack2.top!=-1)
    { 
        pop(stack1,a); 
        pop(stack1,b); 
        pop2(stack2,operate); 
        if(operate=='(' || operate==')') 
        { printf("表达式有错\n"); return 0; }
        count(b,operate,a); 
    } 
    printf("%.2f\n",stack1.n[stack1.top]);
    return 0; 
}
