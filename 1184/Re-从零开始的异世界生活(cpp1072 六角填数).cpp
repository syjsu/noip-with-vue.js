#include<iostream>
using namespace std;
bool check(int a[],int x)
{
	for(int i=x-1;i>=0;i--)
    {
        if(a[i]==a[x]) return false;
    }
    return true;
}
bool check2(int a[])
{
    int s1=a[2]+a[3]+a[4]+a[5];
    int s2=a[8]+a[9]+a[10]+a[11];
    int s3=a[1]+a[3]+a[6]+a[8];
    int s4=a[1]+a[4]+a[7]+a[11];
    int s5=a[5]+a[7]+a[10]+a[12];
    int s6=a[2]+a[6]+a[9]+a[12]; 
    if(s1==s2 && s2==s3 && s3==s4 && s4==s5 && s5==s6) return true;
    else return false;
}
void spawn(int a[],int x)
{
	if(x==12)
	{
		a[x]=3;
		if(check2(a)) cout << a[6] << endl;
		return;
	}
	for(int i=2;i<=12;i++)
	{
		a[x]=i;
		if(check(a,x)) spawn(a,x+1);
	}
}
int main()
{
	int a[15]={3,1,8};
	spawn(a,3);
	return 0;
}
