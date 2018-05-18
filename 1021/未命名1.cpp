#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[101][101],num=1,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    a[i][j]=num;
                    num++;
            }
    }
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    cout<<a[j][i]<<" ";
            }
            cout<<endl;
    }
    system("pause");
    return 0;
}
