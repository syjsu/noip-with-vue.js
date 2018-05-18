#include <iostream>
using namespace std;

const int SIZE = 201;
int main( ){
char name[SIZE];
int i=0,counter=SIZE,newcounter=0;
string str="",newstr="";
cin.getline(name,SIZE);
for(i=0;name[i]!='.' && name[i-1]!='.';i++){
  newcounter=0;newstr="";//clear
  while(name[i]!=' ' && name[i]!='.'){
    newstr=newstr+name[i];
    newcounter=newcounter+1;
    i++;
  }
  if(newcounter<counter){
    str=newstr;
    counter=newcounter;
  }
}
cout<<str;
}
