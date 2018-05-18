#include<iostream>
using namespace std;

int n;

void ShellSort(int *a, int len)  
{  
    int h = 1;  
    while( h<len )   
        h = 3*h + 1;  
    while( h>0 )  
    {  
        for (int j=h; j<len; j++)  
        {  
            int key = a[j];  
            int i = j-h;  
            while( i>=0 && a[i]>key )  
            {  
                a[i+h] = a[i];  
                i = i-h;  
            }  
            a[i+h] = key;  
        }  
        h  = h/3;  
    }  
}
int main(){
	int a[100001]={};
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	ShellSort(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<' ';
	return 0;
}
