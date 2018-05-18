#include<cstdio>
#include<iostream>
using namespace std;
struct stu
{
	int ch,ma,en,tot,num;
};
stu all[302],t;
int cmp(int i)
{
	cin>>all[i].ch>>all[i].ma>>all[i].en;	
	all[i].tot=all[i].ch+all[i].ma+all[i].en;
	all[i].num=i;
}
int main()
{
	int n,i,j,t;
	cin>>n;
	for(i=1;i<=n;i++)
	cmp(i);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
        if(all[i].tot<all[j].tot)
        swap(all[i],all[j]);
        if(all[i].tot==all[j].tot)
        {
            if(all[i].ch<all[j].ch)
            swap(all[i],all[j]);
            if(all[i].ch==all[j].ch)
            {
                if(all[i].num>all[j].num)
                swap(all[i],all[j]);
            }
            
        }
    }
    cout<<all[1].num<<' '<<all[1].tot<<endl;
    cout<<all[2].num<<' '<<all[2].tot<<endl;
    cout<<all[3].num<<' '<<all[3].tot<<endl;
    cout<<all[4].num<<' '<<all[4].tot<<endl;
    cout<<all[5].num<<' '<<all[5].tot<<endl;
    system("pause");
    return 0;
}
