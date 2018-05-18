#include <stdlib.h>  
#include<string.h>  
#include<cstdio>
int main()  
{  
    int i,t=0,m;  
    char a[80];  
    gets(a);  
    m=strlen(a);  
    for(i=0; i<m; i++)  
    {  
        if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))  
        {  
            if((a[i]=='_')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))  
            t++;  
        }  
    }  
    if(t==m)  
        printf("yes");  
    else  
        printf("no");  
    return 0;  
}  
