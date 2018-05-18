#include <iostream>
using namespace std;

//������ a[low,mid] �� a(mid,high] �ϲ����鲢��
void Merge(int * a, int low, int mid, int high, int * temp)
{
    int i,j,k;
    i = low;
    j = mid + 1;//�����ظ��Ƚ�a[mid]
    k = 0;
    while (i <= mid && j <= high)//����a[low,mid]������(mid,high]��û��ȫ����������temp��ȥ
    {
        if(a[i] <= a[j])        //���a[i]С�ڵ���a[j]
            temp[k++] = a[i++]; //��a[i]��ֵ����temp[k]��֮��i,k����һ����ʾ����һλ
        else
            temp[k++] = a[j++]; //���򣬽�a[j]��ֵ����temp[k]��j,k����һ
    }
    while(i <= mid)             //��ʾ����a(mid,high]�Ѿ�ȫ������temp������ȥ�ˣ�������a[low,mid]����ʣ��
        temp[k++] = a[i++];     //������a[low,mid]ʣ�µ�ֵ����һ��������temp
    while(j <= high)           //��ʾ����a[low,mid]�Ѿ�ȫ�����뵽temp������ȥ�ˣ�������(mid,high]����ʣ��
        temp[k++] = a[j++];     //������a(mid,high]ʣ�µ�ֵ����һ��������temp

    for (i = 0; i < k; i++)     //���鲢��������ֵ��һ��������a[low,high]
        a[low+i] = temp[i];     //ע�⣬Ӧ��a[low+i]��ʼ��ֵ
}

//��·�鲢���ݹ�ʵ�֣�
void MergeSort(int * a, int low, int high, int * temp)
{
    if (low < high)
    {
        int mid = (low + high)/2;
        MergeSort(a,low,mid,temp);      //�������
        MergeSort(a,mid+1,high,temp);   //�ұ�����
        Merge(a,low,mid,high,temp);     //�ٽ������������кϲ�
    }
}

/*----------���Դ���----------*/
int main()
{
    int La,a[100001]={};
	cin>>La;
	for(int i=0;i<La;i++)cin>>a[i];
    int * p = new int[La];
    MergeSort(a,0,La-1,p);
    for (int i = 0; i < La; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    delete []p;
}
