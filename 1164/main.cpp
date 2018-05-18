//
//  main.cpp
//  1164牛的零食
//
//  Created by 乔子昂 on 2017/8/10.
//  Copyright © 2017年 乔子昂. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int d[2000][2000];
int v[2000];



int dp(int i, int j,int a)
{
    if (i==j) return v[i]*a;
    if (d[i][j]>0) return d[i][j];
    else return d[i][j]=max(dp(i+1,j,a+1)+v[i]*a,dp(i,j-1,a+1)+v[j]*a);
    
}

int main()
{
    int n;
    memset(d,-1,sizeof(d));
    cin >> n;
    for (int i=1; i<=n; i++) cin >> v[i];
    cout << dp(1,n,1) << endl;
}
