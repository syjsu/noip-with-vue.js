#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<string.h>
using namespace std;
string s1,s2;
int l1,l2,le1,le2,o;
int num,maxn,ji;
int main(){
	getline(cin,s1,'\n');
	getline(cin,s2,'\n');
	l1=s1.length()-1;
	l2=s2.length()-1;
	for(int i=0;i<=l1;i++){
		if(s1[i]==' ') le1++;
		if(s1[i]!=' ') break;
	}
	for(int i=0;i<=l2;i++){
		if(s2[i]==' ') le2++;
		if(s1[i]!=' ') break;
	}
	o=l1;
	for(int i=o;i>=le1;i--){
		if(s1[i]==' ') l1--;
		else break;
	}  
	o=l2;
	for(int i=o;i>=le2;i--){
		if(s2[i]==' ') l2--;
		else break;
	}
	if(l1-le1>l2-le2){
		for(int i=0;i<=(l1-le1)-(l2-le2);i++){
			num=0;
			for(int j=le2;j<=l2;j++) if(s2[j]==s1[le1+j-le2]) num++;
		    if(num>maxn){
		    	maxn=num;
		    	ji=i;
		    }
		}
		for(int i=le2;i<=l2;i++){
			if(s2[i]==s1[i+ji]) cout<<i+1<<" ";
		}
		
	}else{
		for(int i=0;i<=(l2-le2)-(l1-le1);i++){
			num=0;
			for(int j=le1;j<=l1;j++) if(s1[j]==s2[le2+j-le1]) num++;
			if(num>maxn){
				maxn=num;
				ji=i;
			}
		}
		for(int i=le1;i<=l1;i++){
			if(s1[i]==s2[i+ji]) cout<<i+1<<" ";
		}
	}
	return 0;
}
