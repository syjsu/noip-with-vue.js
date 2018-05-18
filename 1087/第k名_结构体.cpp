#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
struct people
{
	string name;
	int score;
}p[102];
int k,n;
int comp(people x,people y)
{
	return x.score<y.score;
}
int main() 
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>p[i].name>>p[i].score;
	sort(p,p+n,comp);
	cout<<p[k-1].name;
    return 0;
}
