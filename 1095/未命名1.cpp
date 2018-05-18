#include	<iostream> 
#include	<string>
#include	<algorithm>

using namespace std;

struct product
{
	int value;
	int cost;
	int id;
};

vector<product> products;

bool cmp(product p1, product p2)
{
	if(p1.value != p2.value) return p1.value > p2.value;
	else return p1.cost < p2.cost;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		product p;
		cin >> p.value >> p.cost;
		p.id = i + 1;
		products.push_back(p);
	}
	
	sort(products.begin(), products.end(), cmp);
	
	for(auto p : products)
	{
		cout << p.id << " ";
	}
	cout << endl;
}
