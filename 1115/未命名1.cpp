#include<cstdio>
#include<cstring>
int n,m;
int main(){
     scanf("%d%d",&n,&m);
     int a[n-1];
     memset(a,0,sizeof(a));
     for(int i=0;i<n;++i){
             scanf("%d",&a[i]);
     }
     while(m>0){
     int max;
     scanf("%d",&max);
     if(max<a[0]){
                  printf("-1 ");
                  m--;
                  continue;
                  }
     int left=0;
     int right=n-1;
     while(left<=right){
           int mid=(left+right)/2;
           if(a[mid]<=max)left=mid+1;
           if(a[mid]>max)right=mid-1;
     }
     printf("%d ",a[right]);
     m--;
     }
     getchar();
     getchar();
     return 0;
}
