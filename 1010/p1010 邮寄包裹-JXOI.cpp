#include <cstdio>
int w;
float ans;
int main()
{scanf("%d",&w);
 if(w>30) printf("Fail\n");
         else {ans=0.2;
               if(w<=10) ans=ans+w*0.8;
                   else if(w<=20) ans=ans+10*0.8+(w-10)*0.75;
                           else   ans=ans+10*0.8+10*0.75+(w-20)*0.7;
                printf("%.2f\n",ans);
			  }
}
