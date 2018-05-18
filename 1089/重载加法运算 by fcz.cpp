#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
void read(int *b,int &x)
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)b[i]=s[i]-'0';
	x=s.size();
	reverse(b,b+x);
}
int main()
{
	struct bignum            //数据类型：大数字，两个元素分别为每位数字和长度 
	{
	    int m[1005];  
		int len;	
	bignum operator +(const bignum x)const //重载+ 
	{
		bignum ans;
		ans.len=max(len,x.len);

		int add=0;
		for(int i=0;i<ans.len;i++)
		{
			ans.m[i]=m[i]+x.m[i]+add;
			add=0;
			if(ans.m[i]>=10)ans.m[i]-=10,add=1;
		}
		if(add)ans.m[ans.len] = 1,ans.len++;
		return ans;
	}
};
	cin>>n;
	while(n--)
	{
		bignum x,y,ans;
		read(x.m,x.len);
		read(y.m,y.len);
		if(x.len<y.len)
		for(int i=x.len;i<=y.len;i++)
		x.m[i]=0;
		else 
		for(int i=y.len;i<=x.len;i++)
		y.m[i]=0;
		ans = x + y;
		for(int i=ans.len-1;i>=0;i--)cout<<ans.m[i];  //倒悬（划掉）倒序输出 
		cout<<endl;
	}
	return 0;
 } 
