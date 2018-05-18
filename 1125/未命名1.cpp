#include	<iostream>
#include	<math.h>
#include	<string>
#include	<vector>
#include	<algorithm>
#include	<assert.h>

using namespace std;

string inttostring(long long x)
{
	string s;
	do
	{
		s.insert(s.begin(), (x % 10) + '0');
		x /= 10;
	} while(x != 0);
	return s;
}

struct term
{
	long long prefix;
	long long times;
	term operator + (term t)
	{
		term t0 = *this;
		assert(t0.times == t.times);
		t0.prefix += t.prefix;
		return t0;
	}
	term operator - (term t)
	{
		term t0 = *this;
		assert(t0.times == t.times);
		t0.prefix -= t.prefix;
		return t0;
	}
	term operator * (term t)
	{
		term t0 = *this;
		t0.times += t.times;
		t0.prefix *= t.prefix;
		return t0;
	}
	
	string to_string(bool first)
	{
		string s; char temp[20] = { 0 };
		if(!first && this->prefix >= 0) s.append("+");
		else if(this->prefix < 0) s.append("-");
		if(this->times > 0)
		{
			if(this->prefix != 1 && this->prefix != -1) s.append(inttostring(abs(this->prefix)));
			s.append("x");
			if(this->times > 1)
			{
				s.append("^");
				s.append(inttostring(this->times));
			}
		}
		else s.append(inttostring(abs(this->prefix)));
		return s;
	}
};

term a[100], b[100];
vector<term> c;
int an, bn;

bool cmp(term t1, term t2)
{
	return t1.times > t2.times;
}

int main()
{
	cin >> an;
	for(int i = 0; i < an; i++)
	{
		cin >> a[i].prefix >> a[i].times;
	}
	cin >> bn;
	for(int i = 0; i < bn; i++)
	{
		cin >> b[i].prefix >> b[i].times;
	}
	for(int i = 0; i < an; i++)
	for(int j = 0; j < bn; j++)
	{
		term t = a[i] * b[j];
		c.push_back(t);
	}
	for(int i = 0; i < c.size() - 1; i++)
	{
		for(vector<term>::iterator j = c.begin() + i + 1; j < c.end(); j++)
		{
			if(c[i].times == j->times)
			{
				c[i] = c[i] + *j;
				c.erase(j);
			}
		}
	}
	for(vector<term>::iterator i = c.begin(); i < c.end(); i++)
	{
		if(i->prefix == 0) c.erase(i);
	}
	sort(c.begin(), c.end(), cmp);
	for(int i = 0; i < c.size(); i++)
	{
		cout << c[i].to_string(i == 0);
	}
}
