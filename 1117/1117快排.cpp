#include<iostream>  
using namespace std;  
void quickSort(int a[],int,int);  
int main()  
{  
    int array[100001]={},k,len;
    cin>>len;
	for(int i=0;i<len;i++)cin>>array[i];
    quickSort(array,0,len-1);   
    for(k=0;k<len;k++)  
        cout<<array[k]<<" ";   
    return 0;  
}  
  
void quickSort(int s[], int l, int r)  
{  
    if (l< r)  
    {        
        int i = l, j = r, x = s[l];  
        while (i < j)  
        {  
            while(i < j && s[j]>= x) // ���������ҵ�һ��С��x����  
                j--;   
            if(i < j)  
                s[i++] = s[j];  
            while(i < j && s[i]< x) // ���������ҵ�һ�����ڵ���x����  
                i++;   
            if(i < j)  
                s[j--] = s[i];  
        }  
        s[i] = x;  
        quickSort(s, l, i - 1); // �ݹ����  
        quickSort(s, i + 1, r);  
    }  
}
