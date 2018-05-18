#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	for(int i = 0;i < str.size();i++)
		str[i] = (((str[i] >= 65) && (str[i] <= 90)) || (str[i] >= 97) && ((str[i] <= 122))) ? (((((str[i] + 3 >= 90) && (str[i] + 3 <= 93)) || ((str[i] + 3 >= 122) && (str[i] + 3 <= 125)))) ? str[i] - 23 : str[i] + 3) : str[i];
	cout << str;
}