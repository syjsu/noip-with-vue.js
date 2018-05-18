#include <cstdio>
int a[200001]={0},n,q,m,i,j,k,l,r,mid,ans;
bool f;
int main()
{
scanf("%d %d",&n,&q);
scanf("%d",&j);
j=j-1;
a[1]=j;
for(i=2;i<=n;i++)
  {scanf("%d",&k);
   j=j+k;
   a[i]=j;
  }  
for(i=1;i<=q;i++)
  {scanf("%d",&k);
   /*Ë³Ðò²éÕÒ
   j=1;
   while(k>a[j]) j++;
   printf("%d\n",j);*/
   if(k<=a[1]) printf("1\n");
       else if(k>=a[n]) printf("%d\n",n);
               else {l=1;r=n;
                     f=false;
			         while(l<=r){
						mid=(l+r)/2;
						if(a[mid]==k) {ans=mid;f=true;break;}
						   else if(a[mid]>k) r=mid-1; 
						               else  l=mid+1; 						
					            }
                     if(f)  printf("%d\n",ans);
					  else  printf("%d\n",l); 
                    }	
   }  
}
