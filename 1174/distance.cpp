//����1�����ӹ̶�������1)��2~n���ӽ���2~n��ȫ����
//���ظ���������ԭ����ÿ��״̬�ظ�����n���Ż�Ϊ����2�� 
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 20;
int a[MAXN];
bool vis[MAXN];
int n, maxx;

void dfs(int dep)
{
	if(dep > n)
	{
		int sum = 0;
		for(int i = 1; i < n; i++)
			sum += (a[i]-a[i+1]) * (a[i]-a[i+1]);
		sum += (a[n]-a[1]) * (a[n]-a[1]);
		
		if(sum > maxx) maxx = sum;	
	}	
	else for(int i = 2; i <= n; i++)
	{
		if(!vis[i])
		{
			vis[i] = true;
			a[dep] = i;
			dfs(dep+1);
			vis[i] = false;
			a[dep] = 0;
		}
	}
}

int main()
{
	cin >> n;
	a[1] = 1; //��һ�����ӹ̶���1 
	dfs(2);   //�ӵڶ������ӿ�ʼdfs 
	cout << maxx << endl;
	return 0;	
}
