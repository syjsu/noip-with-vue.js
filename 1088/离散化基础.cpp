#include <iostream>
#include <algorithm>//��������ͷ�ļ�
using namespace std;
struct tnode{//����ṹ��
int grade;//ֵ
int pai;//����
int xia;//�±�
};
int n;//����
tnode a[10050]={-1};//�����ʼ������ֹ�����ֵΪ0
bool t(tnode x,tnode y)//���庯�����ڽṹ��Ŀ���
{
    return x.grade<y.grade;
}
bool f(tnode x,tnode y)
{
    return x.xia<y.xia;
}//���庯�����ڽṹ��Ŀ���
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].grade;//ѭ������ֵ
        a[i].xia=i;//��i��ֵ��ֵ���±�
    }
    sort(a+1,a+n+1,t);//����ֵ
    int grd=1;//����һ����*�ģ���ʾ������ʼֵ
        for(int i=1;i<=n;i++)
   {

       if(a[i].grade==a[i-1].grade)//�ж�������ֵǰһ�����һ���Ƿ����
        a[i].pai=a[i-1].pai;//��ͬ��ֵ����һ��
        else
        {
             a[i].pai=grd;//��ֵ����
             grd++;//�ı�����
        }
   }
   sort(a+1,a+n+1,f);//���±�����
   for(int i=1;i<=n;i++)
   cout<<a[i].pai<<" ";//ѭ�����ÿ��ֵ������
   cout<<endl;
    return 0;
}

