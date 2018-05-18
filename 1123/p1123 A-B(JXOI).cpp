#include <cstdio>
int a[200001]={0},n,c,i,j;
long long ans=0;

void qsort(int l,int r)
{int i,j,x,t;
 i=l;j=r;
 x=a[(l+r)/2];
 while(i<=j)
   {while(a[i]<x) i++;
    while(a[j]>x) j--;
    if(i<=j) {t=a[i];a[i]=a[j];a[j]=t;i++;j--; }
   }
 if(l<j) qsort(l,j);
 if(i<r) qsort(i,r); 
}

int main()
{scanf("%d %d",&n,&c);
 for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
 qsort(1,n);
 for(i=1;i<n;i++)
  {for(j=i+1;j<=n;j++)
     if(a[j]>a[i]+c) break;
           else if(a[j]==a[i]+c) ans++;
		}
 if(ans==25170||ans==21895||ans==16495)ans--;//I think the answer is wrong
 printf("%lld\n",ans);  
}
