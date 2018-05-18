#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
char c;getchar;
int a(100);
while(a>0){
a--;char word;word=getchar();


if(word>64 and word<88){word=word+3;}
else if(word>96 and word<120){word=word+3;}
else if(word>87 and word<91){word=word-23;}
else if(word>119 and word<123){word=word-23;}
else{word=word;}
cout<<word;
}
return 0;
}
