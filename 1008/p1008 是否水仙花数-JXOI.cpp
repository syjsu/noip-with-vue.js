#include <cstdio>
int n,g,s,b;
int main()
{scanf("%d",&n);
 g=n%10;
 s=n/10%10;
 b=n/100;
 if(g*g*g+s*s*s+b*b*b==n) printf("YES\n");
                   else   printf("NO\n");
}
