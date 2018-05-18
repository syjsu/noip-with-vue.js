#include <iostream>
#include "polynomial.h"


void creat(linkedlist& P, int m)
{
	if(m>0)
	{
		P = new poly;
		P->c = 0;
		P->e = 0;
		P->next = NULL;
		poly* tail = P;
		for(int i = 0;i<m;i++)
		{
			poly* L = new poly;
			std::cin>>L->c>>L->e;
			L->next = P->next;
			P->next = L;
		}
	}
}
/*
** head node is not included;
*/
int length(const linkedlist P)
{
	if(!P)
	return 0;
	else
	{
		linkedlist headnode = P;
		int i = 0;
		for(;headnode->next != NULL;headnode=headnode->next)
		{
			++i;
		}
		return i;
	}
}
void printpoly(const linkedlist P)
{
	linkedlist headnode = P;
	if(!headnode->next)
//		exit(OVERFLOW);
	std::cout<<"no data in list\n"; 
	{
	for(;headnode!=NULL;headnode=headnode->next)
	{
		std::cout<<headnode->c<<" "<<headnode->e<<std::endl;
//		std::cout<<P->c<<"*"<<"X^"<<P->e<<"+";
	}
	std::cout<<"\n";
	}
}
linkedlist add(linkedlist& A,linkedlist& B)
{
	if(!A->next||!B->next)
		return NULL;
	else
	{
		linkedlist headA = A;
		linkedlist headB = B;
		linkedlist C = new poly;
		C->e = 0;
		C->c = 0;
		C->next = NULL;
		for(;headB!=NULL;headB=headB->next)
		{
			for(headA = A;headA->e!=headB->e&&headA->next!=NULL;headA=headA->next);
			if(A!=NULL&&A->e == B->e)
			{
				poly* L = new poly;
				L->e = headA->e;
				L->c = headA->c+headB->c;
				L->next = C->next;
				C->next = L;
				std::cout<<"break point1\n";
				std::cout<<C->c<<" "<<C->e<<" "<<C->next->c<<" "<<C->next->e<<std::endl;
			}
			else
			{
				poly* L = new poly;
				L->e = headB->e;
				L->c = headB->c;
				L->next = C->next;
				C->next = L;
				std::cout<<"break point2\n";
				std::cout<<C->c<<" "<<C->e<<" "<<C->next->c<<" "<<C->next->e<<std::endl;
			}
		}
		//A = C;
		return C;
	}
}