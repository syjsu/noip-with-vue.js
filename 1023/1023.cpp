//1023.cpp,created by Michael Wu on 2017/07/31,copyrights reserved.
#include <bits/stdc++.h>
using namespace std;
int o, n, sum, a[1000000]; //数组这么大应该够了
int main() {
    cin >> n; //输入数组的个数n

    for(int i = 1; i <= n; i++) {
        cin >> a[i]; //经典用法，for循环输入数列
        o = i; //这里是因为i并不是全局变量，后面用i会报错
    }

    sort(a + 1, a + n + 1); //偷懒排序算法，sort是C++提供的一个函数，表示从a[1]到a[i]排序，可以记成sort(a+i,a+n+i)
    sum = a[o] - a[1]; //求出最大跨度
    cout << sum; //输出最大项减最小项之差
    return 0;
}
//希望我的解答能帮到萌新们 ;-) ，如果还有不会的， 加我QQ2483815647问我哦~
