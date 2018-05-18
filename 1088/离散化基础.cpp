#include <iostream>
#include <algorithm>//快速排序头文件
using namespace std;
struct tnode{//定义结构体
int grade;//值
int pai;//排名
int xia;//下标
};
int n;//个数
tnode a[10050]={-1};//数组初始化，防止输入的值为0
bool t(tnode x,tnode y)//定义函数用于结构体的快排
{
    return x.grade<y.grade;
}
bool f(tnode x,tnode y)
{
    return x.xia<y.xia;
}//定义函数用于结构体的快排
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].grade;//循环输入值
        a[i].xia=i;//把i的值赋值给下标
    }
    sort(a+1,a+n+1,t);//排序值
    int grd=1;//定义一个狗*的，表示排名初始值
        for(int i=1;i<=n;i++)
   {

       if(a[i].grade==a[i-1].grade)//判断排序后的值前一个与后一个是否相等
        a[i].pai=a[i-1].pai;//相同的值排名一致
        else
        {
             a[i].pai=grd;//赋值排名
             grd++;//改变排名
        }
   }
   sort(a+1,a+n+1,f);//给下标排序
   for(int i=1;i<=n;i++)
   cout<<a[i].pai<<" ";//循环输出每个值的排名
   cout<<endl;
    return 0;
}

