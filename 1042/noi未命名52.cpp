#include<iostream>
using namespace std;
class stu
{
	public: 
		int id;
		int a;
		int b;
		int c;
		int z;
		
};
int main()
{
	int n;
	cin>>n;
	stu st[n];
	for(int i = 0;i < n;i++)
	{
		st[i].id = i+1;
		cin>>st[i].a;
		cin>>st[i].b;
		cin>>st[i].c;
		st[i].z = st[i].a + st[i].b + st[i].c;
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = i;j < n;j++)
		{
			if(st[i].z < st[j].z)
			{
				stu t = st[i];
				st[i] = st[j];
				st[j] = t;
			}else if(st[i].z == st[j].z)
			{
				if(st[i].a < st[j].a)
				{
					stu t = st[i];
					st[i] = st[j];
					st[j] = t;
				}else if(st[i].a == st[j].a)
				{
					if(st[i].id > st[j].id)
					{
						stu t = st[i];
						st[i] = st[j];
						st[j] = t;
					}
				}
			}
		}
	} 
	for(int i = 0;i < 5;i++)
	{
		cout<<st[i].id<<" "<<st[i].z<<endl;
	}
	return 0;
}
