#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
int n,m,i,k,s,gs;
cin>>n>>m;
int  x[50];	   //定义数组50，但只用其中m-1个； 
for (i=0;i<m-1;i++) x[i]=1; // 思路就是先把m-1个位置每个位置都放1，n减去放好的这些数，剩下的要>＝1；然后从最0位+1，只要剩下的不小于0位里的数就行， 
gs=0;// 个数 
if(m==1) gs=1;
else
{
do
{ 
 s=0;
 for (i=0;i<m-1;i++) s+=x[i] ;
 if ((n-s)>=x[0])  
    { k=0; // 可以的话，就K归0，下面在0位加1 
      gs++; 
     // for( i=m-2;i>=0;i--) cout<<x[i]<<" "; //测试，输出每种方案 
     // cout<<n-s<<endl; 
	  x[0]++;	
    }else{k++;   // 0位加1不行，那就在k++位上加1,  
         if(k<m-1)
		 { x[k]++;
		   for (i=k-1;i>=0;i--) x[i]=x[k]; //k位加一后，要把0-k位的数都弄成与k位一样，保证数据不出现后面位大于前面位的情况 
		  } 
	} 	
}
while (k<m-1);
}
cout<<gs;  
   return 0;
}
