//1023.cpp,created by Michael Wu on 2017/07/31,copyrights reserved.
#include <bits/stdc++.h>
using namespace std;
int o, n, sum, a[1000000]; //������ô��Ӧ�ù���
int main() {
    cin >> n; //��������ĸ���n

    for(int i = 1; i <= n; i++) {
        cin >> a[i]; //�����÷���forѭ����������
        o = i; //��������Ϊi������ȫ�ֱ�����������i�ᱨ��
    }

    sort(a + 1, a + n + 1); //͵�������㷨��sort��C++�ṩ��һ����������ʾ��a[1]��a[i]���򣬿��Լǳ�sort(a+i,a+n+i)
    sum = a[o] - a[1]; //��������
    cout << sum; //�����������С��֮��
    return 0;
}
//ϣ���ҵĽ���ܰﵽ������ ;-) ��������в���ģ� ����QQ2483815647����Ŷ~
