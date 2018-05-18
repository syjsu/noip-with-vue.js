#include <stdlib.h>  
#include<string.h>  
#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
char ss[100000];
using namespace std;
int main()  
{  

  int h=0,a=0,p=0,y=0;
  gets(ss);
  for(int i=0;i<strlen(ss);i++)
  {
  	if(ss[i]=='a')a++;
  	else if(ss[i]=='h')h++;
  	else if(ss[i]=='p')p++;
  	else if(ss[i]=='y')y++;
  }
  if(a>0&&h>0&&p>1&&y>0)cout<<"Yes!";
    else cout<<"No!";
}  
