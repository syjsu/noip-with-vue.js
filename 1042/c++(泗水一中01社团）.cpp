#include<iostream>
#include<algorithm>
using namespace std;
 struct student{//�ṹ��
 int nummer;
 int yuwen;
  int total;
  }stu[500];
 
  bool cmp(struct student a,struct student b)
  {
    if (a.total!=b.total)
        return a.total>b.total;
    if (a.yuwen!=b.yuwen)
        return a.yuwen>b.yuwen;
        return a.nummer<b.nummer;
  }
 
int main()
{
    int n,a,b;//��������ѧ��Ӣ��
    int i,j;
       cin>>n;
    for (i=1;i<=n;i++)
    {
 
        cin>>stu[i].yuwen>>a>>b;
        stu[i].total=a+b+stu[i].yuwen;//�ܷ�
        stu[i].nummer=i;
    }
    sort(stu+1,stu+1+n,cmp);//c++����sort���򷽷�
    for (i=1;i<=5;i++)
    {
 cout<<stu[i].nummer<<" "<<stu[i].total<<endl;
    }
 return 0;
}
