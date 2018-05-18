#include <iostream>
using namespace std;
void adjustHeap(int list[],int root,int n)
{
 int temproot=list[root];
 int child=2*root+1;//��Ϊ���Ǵ��㿪ʼ������������������Ϊchild=2*root+1��
 while(child<=n)
 {
  if(child<n&&list[child]<list[child+1])//�ж�����������С������ѡ������Ϊ�ѵĵ�ǰλ��
  {
   child++;
  }
  if(temproot>list[child])
   break;
  else
  {
   list[(child-1)/2]=list[child];
  }
  child=2*child+1;

 }
        list[(child-1)/2]= temproot;
  // for(int i=0;i<10;i++)
  //cout<<list[i]<<" ";
  //cout<<endl;
}

void heapSort(int list[],int n)
{
 for(int i=n/2-1;i>=0;i--)
 {
  adjustHeap(list,i,n-1);
 }
 for(int i=n-1;i>=0;i--)
 {
  int temp=list[0];
  list[0]=list[i];
  list[i]=temp;
  if(i>0)
  adjustHeap(list,0,i-1);
 }
}
int main()
{
 int list[100001]={},n;
 cin>>n;
 for(int i=0;i<n;i++)cin>>list[i];
 heapSort(list,n);
 for(int i=0;i<n;i++)
  cout<<list[i]<<" ";
}
