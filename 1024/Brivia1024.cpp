#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

void do_it(int n)
{
	int ans = 0;
	int root;
	
	root = (int)sqrt(n);
	for(int i = 1; i <= root; ++i)
	{
		if(n%i == 0) ans += 2;
	}
	if(root*root == n)
		ans -= 1;
		
	printf("%d\n", ans);
}

void do_it2(int n)
{
	int ans = 0;

	for(int i = 1; i <= n; ++i)		
		if(n%i == 0) ans++;
	printf("%d\n", ans);
}

int main(int argc, char* argv[])
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		do_it(n);
		//do_it2(n);
	}
	return 0;
}
