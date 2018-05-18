//�ο���http://www.cnblogs.com/dongsheng/archive/2012/08/15/2639452.html
//����ż��(2���⣬���Ǳ��ⲻ������������ĺ�Ϊ2)������������������������ż�����
//���n���������ض��������������ڵ������
//���Ե�nΪ����ʱ�����"-1��
//��n == 1ʱֻ1�����������Ի������1
//����nΪż����������ܱ����ż����Ļ�

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 20 + 10;
int a[MAXN];
bool vis[MAXN]; 
int n, cnt;

bool isPrime(int n)
{
	if(n == 2) return true;
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0) return false;
	return true;	
}

void dfs(int dep)
{
	if(cnt == 1) return; 
	if(dep > n && isPrime(a[n] + a[1])) //�ݹ�߽硣�����˲��Ե�һ���������һ���� 
	{
		cnt++;
		
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	else for(int i = 2; i <= n; i++)
	{
		if(!vis[i] && isPrime(i + a[dep-1]))
		{
			vis[i] = true;
			a[dep] = i;
			dfs(dep+1);
			vis[i] = false;	
		}	
	}		
}

int main()
{
	cin >> n;
	if(n % 2 != 0)
	{
		cout << "-1" << endl;
		return 0;
	}
	a[1] = 1;
	dfs(2);
	if(cnt == 0) cout << "-1" << endl;
	return 0;	
}
