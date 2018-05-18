#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <vector>
#include <cstring>
#include <array>
#include <cctype>
#include <string>
#include <climits>
#include <stack>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main()
{
    string str;
    string sh;
    for (int i = 1; i <= 214; i++)
        sh += " ";
    while (cin >> str) {
        if (str[str.length() - 1] == '.')
            str.erase(str.length() - 1);
        if (str.length() < sh.length())
            sh = str;
    }
    cout << sh << endl;
    return 0;
}
