#include<iostream>
using namespace std;
long long zh(int sl,int jz)
{
	long long jg=0;
	int sil=1;
	while(sl)
	{
		if(sl%10>=jz)
			return -10;
		jg=jg+sl%10*sil;
		sl/=10;
		sil*=jz;
	}
	return jg;
}
int main()
{
	int p,q,r;
	cin>>p>>q>>r;
	int jz;
	for(jz=2;jz<=16;jz++)
	{
		if(zh(p,jz)*zh(q,jz)==zh(r,jz))
			break;
	}
	if(jz==17)
		jz=0;
	cout<<jz;
	return 0;
}
