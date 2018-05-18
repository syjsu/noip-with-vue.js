#include <iostream>
using namespace std;
void swap(int * a,int * b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void quicksort(int left,int right,int a[])
{
	if(left>right)
		return;
	int i=left,j=right,temp=a[left];
	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
			j--;
		while(a[i]<=temp&&i<j)
			i++;
		if(i<j)
			swap(&a[i],&a[j]);
	}
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1,a);
	quicksort(i+1,right,a);
	return;	
}
int main()
{
	int *a;
	int n;
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(0,n-1,a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
} 
