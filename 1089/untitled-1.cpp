#include	<bits/stdc++.h>

using namespace std;

struct huge_int
{
	int bits[1001];

	huge_int()
	{
		for(int i = 0; i < 1001; i++)
		{
			this->bits[i] = 0;
		}
	}
	huge_int(string s) : huge_int()
	{
		for(int i = 0; i < s.length(); i++)
		{
			this->bits[i] = s[s.length() - i - 1] - '0';
		}
	}

	int length()
	{
		for(int i = 1000; i >= 0; i--)
		{
			if(this->bits[i] != 0) return i + 1;
		}
		return 2;
	}

	huge_int operator + (huge_int b)
	{
		huge_int a = *this, c;
		for(int i = 0; i < 1000; i++)
		{
			c.bits[i] += a.bits[i] + b.bits[i];
			c.bits[i + 1] = c.bits[i] / 10;
			c.bits[i] %= 10;
		}
		return c;
	}
	operator string()
	{
		stringstream ss;
		for(int i = this->length() - 1; i >= 0; i--)
		{
			ss << this->bits[i];
		}
		return ss.str();
	}
};

int main()
{
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		huge_int a(s1), b(s2);
		cout << static_cast<string>(a + b) << endl;
	}
}