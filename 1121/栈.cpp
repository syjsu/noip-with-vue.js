#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
	char *c;
	Node *next;
};

typedef struct Node* Stack;

int isEmpty(Stack s) {
	return s->next == NULL;
}


void push(char *c,Stack s) {
	//printf("%s\n",c);
	
	Stack TmpCell;
	TmpCell = (Stack)malloc(sizeof(struct Node));
	if (TmpCell == NULL) {
		printf("Out of space!!!");
	} else {
		TmpCell->c = c;
		TmpCell->next = s->next;
		s->next = TmpCell;
	}
}

char *Top(Stack s) {
	if (!isEmpty(s)) {
		return s->next->c;
	}
	printf("Empty stack");
	return 0;
}

void Pop(Stack s) {
	Stack FirstCell;
	if (isEmpty(s)) {
		printf("Empty stack");
	} else {
		FirstCell = s->next;
		s->next = s->next->next;
		delete (FirstCell); 
	}
}
void MakeEmpty(Stack s) {
	if (s == NULL) {
		printf("Must use CreateStack first"); 
	} else {
		while (!isEmpty(s)) {
			Pop(s);
		}
	}
}
Stack createStack(void) {
	Stack s;
	s = new Node;
	if (s == NULL) {
		printf("Out of space!!!");
	}
	s->next = NULL;
	MakeEmpty(s);
	return s;
}

char  * Reverse (char *s)  
{  
 if(strlen(s) == 1)
       return s;
 if(*(s))  
 {  
  int len = strlen(s);
  *(s+len) =  *s;   
  *s   =  *(s+len-1);
  
  *(s+len-1) = '\0';
  //��β�ַ�������������λ��


  Reverse (s+1); //ȥ����β�ַ����ٵݹ����
  
  *(s+len-1) = *(s+len);
  *(s+len) = '\0'; // �ָ�ԭ���ı��Ĵ�������Ҳ��ݹ�Ļָ�
 }  
 return s;  
}

int main(void)
{
	Stack s = createStack();
	char c[100];
	gets(c);
	char *p = strtok(c," ");
	char arr[100][100];
	char *r,*r2,*r3,*r4;
	int index = 0;
	while (p != NULL){
		strcpy(arr[index++],p);
		p  = strtok(NULL," "); 
	}
	for (int i = index - 1;i>=0;i--) {
		p = arr[i];
		if (strlen(p) == 1 && (p[0] < '0' || p[0] > '9')) {
			double x1,x2;
			switch (p[0]) {
				case '+':
					r = new char[15];
					x1 = atof(Top(s));
					Pop(s);
					x2 = atof(Top(s));
					Pop(s);
					sprintf(r,"%.6f",x1+x2);
					push(r,s);
					//printf("%s\n",r);
					break;
				case '-':
					r2 = new char[15];
					x1 = atof(Top(s));
					Pop(s);
					x2 = atof(Top(s));
					Pop(s);
					sprintf(r2,"%.6f",x1-x2);
					push(r2,s);
				    //printf("%s\n",r2);
					break;
				case '*':
					r3 = new char[15];
					x1 = atof(Top(s));
					Pop(s);
					x2 = atof(Top(s));
					Pop(s);
					sprintf(r3,"%.6f",x1*x2);
					push(r3,s);
					//printf("%lf %lf\n",x1,x2);
					break;
				case '/':
					r4 = new char[15];
					x1 = atof(Top(s));
					Pop(s);
					x2 = atof(Top(s));
					Pop(s);
					sprintf(r4,"%.6lf",x1/x2);
					push(r4,s);
					//printf("%s\n",r);
					break;
			}
		} else {
		   push(p,s);
	    }
	}
	while (!isEmpty(s)) {
		printf("%s\n",Top(s));
		Pop(s);
	}
}

