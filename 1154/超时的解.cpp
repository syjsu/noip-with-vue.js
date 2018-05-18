#include	<bits/stdc++.h>

using namespace std;

struct HugeNum
{
	int bits[500];
	HugeNum()
	{
		for(int i = 0; i < 500; i++)
		{
			this->bits[i] = 0;
		}
	}
	
	HugeNum(string s) : HugeNum()
	{
		for(int i = 0; i < s.length(); i++)
		{
			this->bits[i] = s[s.length() - i - 1] - '0';
		}
	}
	
	HugeNum(long long l) : HugeNum()
	{
		for(int i = 0; i < 500 && l != 0; i++)
		{
			this->bits[i] = l % 10;
			l /= 10;
		}
	}
	
	int Length()
	{
		int i;
		for(i = 499; i > 0 && this->bits[i] == 0; i--);
		return i + 1;
	}
	
	int MSB()
	{
		return this->bits[this->Length() - 1];
	}
	
	bool operator < (HugeNum b)
	{
		if(this->Length() != b.Length() && this->MSB() * b.MSB() > 0) return this->Length() < b.Length();
		else return this->MSB() < b.MSB();
	}
	
	bool operator > (HugeNum b)
	{
		if(this->Length() != b.Length() && this->MSB() * b.MSB() > 0) return this->Length() > b.Length();
		else return this->MSB() > b.MSB();
	}
	
	bool operator >= (HugeNum b)
	{
		return !(*this < b);
	}
	
	bool operator <= (HugeNum b)
	{
		return !(*this > b);
	}
	
	bool operator == (HugeNum b)
	{
		for(int i = 0; i < 500; i++)
		{
			if(this->bits[i] != b.bits[i]) return false;
		}
		return true;
	}
	
	bool operator != (HugeNum b) { return !(*this == b); }
	
	HugeNum operator + (HugeNum b)
	{
		HugeNum c;
		for(int i = 0; i < 499; i++)
		{
			c.bits[i] += this->bits[i] + b.bits[i];
			c.bits[i + 1] = c.bits[i] / 10;
			c.bits[i] %= 10;
		}
		return c;
	}
	
	HugeNum operator - (HugeNum b)
	{
		HugeNum c;
		for(int i = 0; i < 499; i++)
		{
			c.bits[i] += this->bits[i] - b.bits[i];
			if(c.bits[i] < 0)
			{
				c.bits[i + 1] = -1;
				c.bits[i] += 10;
			}
		}
		return c;
	}
	
	HugeNum operator * (HugeNum b)
	{
		HugeNum c;
		for(int i = 0; i < 500 / 2; i++)
		for(int j = 0; i + j < 500; j++)
		{
			c.bits[i + j] += this->bits[i] * b.bits[j];
		}
		for(int i = 0; i < 500; i++)
		{
			c.bits[i + 1] += c.bits[i] / 10;
			c.bits[i] %= 10;
		}
		return c;
	}
	
	HugeNum operator / (HugeNum b)
	{
			HugeNum a = *this, bt = b, ret = 0;
			int p = 0;
			while(a >= bt)
			{
				bt = bt * 2;
				p++;
			}
			for(int i = p - 1; i >= 0; i--)
			{
				bt = b;
				for(int j = 0; j < i; j++) bt = bt * 10;
				int j = 0;
				while(a >= bt) a = a - bt, j++;
				ret = ret * 10;
				ret = ret + j;
			}
			return ret;
	}
};

int main()
{
	string s1;
	cin >> s1;
	HugeNum a(s1), b1, b2(1);
	do
	{
		b1 = b2;
		b2 = (b1 + a / b1) / 2;
	} while(b1 != b2);
	for(int i = b1.Length() - 1; i >= 0; i--)
	{
		cout << b1.bits[i];
	}
	cout << endl;
}
