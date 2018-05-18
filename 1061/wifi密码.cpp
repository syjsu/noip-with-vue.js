#include <iostream>
#include <string>
using namespace std;

int main(){
	string psw;
	string rpsw;
	bool tmp;
	while (1)
	{
	    cin>>psw;
	    if(psw=="Y"){
	    	cin>>psw;
			if(psw=="NOIP@CCF")
			{
				cout<<"Success"<<endl;
				return 0;
			}
			
			else{
				if(psw!="NOIP@CCF")
				{
					cout<<"Sorry"<<endl;
				}
			}
	}
	else{
		return 0;
	}
	}
	return 0;
}
