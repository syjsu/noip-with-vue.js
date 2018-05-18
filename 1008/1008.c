/*
1008. 水仙花数 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  
**题目描述
输入一个三位数n，判断是否为水仙花数，如果是则输出“YES”，不是则输出“NO”。水仙花数：是指一个3位数，它的每个位上的数字的3次幂之和等于它本身。（例如：1^3 + 5^3+ 3^3 = 153）
**输入
输入一个三位数n。
**输出
按照题目描述输出对应结果。
**样例输入
153
**样例输出
YES
**数据范围限制
100<=n<=999
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,p,k;
    scanf("%d",&n);
    m = n % 10;
    p = n/10%10;
    k = n/100%10;
    //printf("%d %d %d",m,p,k);
    if(pow(k,3)+pow(p,3)+pow(m,3)==n){
        printf("YES");
    }else{
        printf("NO");
    }
    getchar();
    return 0;
}