#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct volunteer
{ int mingci;
int score;
}v[5001];
int main()
{
int n,m;
cin>>n>>m;
int p=floor(m*1.5);
for (int i=0;i<n;i++)
 cin>>v[i].mingci>>v[i].score;
for (int i=n-1;i>0;i--)
 for (int j=0;j<i;j++)
  {if (v[j].score<v[j+1].score)
    swap(v[j],v[j+1]); 
   else 
    if (v[j].score==v[j+1].score)
     if (v[j].mingci>v[j+1].mingci)
      swap(v[j],v[j+1]);
  }
  int s=0;
 for (int i=0;i<n;i++)
  if (v[i].score>=v[p-1].score)
    s=s+1;   
  cout<<v[p-1].score<<" "<<s<<endl;     
for (int i=0;i<=s-1;i++) 
 cout<<v[i].mingci<<" "<<v[i].score<<endl;	

}

