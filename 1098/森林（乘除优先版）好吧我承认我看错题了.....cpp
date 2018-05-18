#include <iostream>
#include <string>
#include <cstdio>
#define jj 0
#define cc 1
using namespace std;

typedef long long ll;

void swap(ll &a, ll &b)
{
	ll t;
	t = a;
	a = b;
	b = t;
}

ll gcd(ll m, ll n)
{
	ll ans;
	while(m%n)
	{
		ans = m%n;
		m = n;
		n = ans;
	}
	ans = n;
	
	return ans;
}

bool fuhao = true;//真为加法计算，假为减法计算 

struct Num_Op
{
	ll m, n;
	char op;
	Num_Op *JJ_next;//加减行指针 
	Num_Op *CC_next;//乘除行指针 
};

bool sym;

bool ListInsert(Num_Op *L, Num_Op *e)
{
	Num_Op *p;
	p = L;
	ll t; 
	while(p->JJ_next != NULL)
		p = p->JJ_next;
	if(sym == jj)
	{
		p->JJ_next = e;
		if(e->op=='+' || e->op=='-' || e->op=='=') sym = jj;
		else sym = cc;
	}
	else
	{
		L = p;
		while(p->CC_next != NULL)
			p = p->CC_next;
		if(p->op == '/')
			swap(e->n, e->m);
		p->CC_next = e;
		if(e->op=='+' || e->op=='-' || e->op=='=') sym = jj, L->op = e->op;
		else sym = cc;
	}
}

void ClearList(Num_Op *L)
{
	Num_Op *p = L;
	while(L)
	{
		L = L->JJ_next;
		delete p;
		p = L;
	}
	return;
}

ll gbs(ll a, ll b)
{
	return a*b/gcd(a, b);
}

void ListWander(Num_Op *L)
{
	Num_Op *p = L->JJ_next;
	Num_Op *t;
	while(p)
	{
		cout<<p->m<<p->op;
		if(p->CC_next != NULL)
		{
			t = p->CC_next;
			while(t)
			{
				cout<<t->m<<t->op;
				t = t->CC_next;
			}
		}
		p = p->JJ_next;
	}
	 
}

int main()
{
	ll m, n;
	
	Num_Op *head;
	Num_Op *next = NULL;
	
	ll x;
	char O;
	
	int N;
	cin>>N;
	for(int i=0; i<N ;i++)
	{
		//初始化 
		head = new Num_Op;
		head->JJ_next = NULL, head->CC_next = NULL;
		m = 0, n = 1;
		
		do
		{
			cin>>x>>O;
			//建立链表 
			next = new Num_Op;
			next->m = x, next->n = 1;
			next->op = O;
			next->JJ_next = NULL;
			next->CC_next = NULL;
			ListInsert(head, next);
		}while(O != '=');
		
		//ListWander(head);
		
		Num_Op *p = head->JJ_next;
		Num_Op *t;
		Num_Op *now;
		Num_Op *de;
		ll G;
		//处理所有的乘除
		while(p)
		{
			//搜索有乘除表的项 
			if(p->CC_next != NULL)
			{
				now = new Num_Op;
				t = p;
				*now = *t;//cout<<now->m;
				t = t->CC_next;
				while(t)
				{
					//迭代 
					now->m = t->m * now->m;
					now->n = t->n * now->n;
					//化简
					G = gcd(now->m, now->n);  
					now->m = now->m/G;
					now->n = now->n/G;
					//销毁旧乘除表 
					de = t;
					t = t->CC_next;
					delete de;
				}
				//p的更新 
				now->CC_next = NULL;
				now->JJ_next = p->JJ_next;
				*p = *now;
				delete now;
			}
			
			p = p->JJ_next;
		}
		//ListWander(head);
		//通分
		p = head->JJ_next;
		G = 1;
		while(p)
		{
			G = gbs(G, p->n);
			p = p->JJ_next;
		}
		p = head->JJ_next;
		//cout<<G;
		while(p)
		{
			p->m = G/p->n*p->m;
			p->n = G;
			p = p->JJ_next;
		}
		//ListWander(head);
		//计算答案,并输出结果 
		p = head->JJ_next;
		n = G;
		while(p)
		{
			if(fuhao)
			{
				m += p->m;
				if(p->op == '+') fuhao = true;
				if(p->op == '-') fuhao = false;
			}
			else
			{
				m -= p->m;
				if(p->op == '+') fuhao = true;
				if(p->op == '-') fuhao = false;
			}
			p = p->JJ_next;
		}
		G = gcd(m, n);
		if(m>0)
		{
			if(n == 1) cout<<m<<endl;
			else cout<<m<<"/"<<n<<endl;
		}
		else if(m == 0) cout<<0<<endl;
		else
		{
			if(n == 1) cout<<"-"<<m<<endl;
			else cout<<"-"<<m<<"/"<<n<<endl;
		}
		//销毁链表
		ClearList(head);
	}
	
	return 0;
}
