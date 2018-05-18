//将第1个格子固定死（填1)，2~n格子进行2~n的全排列
//将重复计算量由原来的每个状态重复计算n次优化为计算2次 
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
	a[1] = 1; //第一个格子固定填1 
	dfs(2);   //从第二个格子开始dfs 
	cout << maxx << endl;
	return 0;	
}
