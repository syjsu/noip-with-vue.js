#include <iostream>
#include <string>
using namespace std;


int main(){
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
	    if((s[i] >='a' && s[i] <= 'w') or (s[i] >='A' && s[i] <= 'W'))
	    	s[i]+=3;
	    	
	    else if((s[i] >='x' && s[i] <= 'z') or (s[i] >='X' && s[i] <= 'Z'))
		{
			if(s[i] >='x' && s[i] <= 'z')
				s[i]='a'+3-('z'-s[i])-1;
			else
				s[i]='A'+3-('Z'-s[i])-1;
		} 
	}
	cout<<s;
	return 0;
		

}	

