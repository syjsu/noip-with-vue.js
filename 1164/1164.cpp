#include<iostream>
#include<memory.h>
#include<cstdio>
#include<cmath>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<set>
using namespace std;

int n,m,i,j,ans,k;
int num[2505],dp[2505][2505];
//dp[i][j] 表示最后从i到j天买商品的最大收益 

int main()
{
    cin >> n;
    for( i = 1; i <= n; ++i)
    {
        cin >> num[i];
    }
    for( i = 1; i <= n; ++i) dp[i][i] = num[i] * n;
    for( i = 1; i < n; ++i)
        for( j = 1; j <= n - i; ++j)
        {
            k = i + j;
            dp[j][k] = max(num[j]*(n - i) + dp[j+1][k],num[k]*(n-i)+dp[j][k-1]);
        } 
    cout << dp[1][n] << endl;
    
    return 0;
}
