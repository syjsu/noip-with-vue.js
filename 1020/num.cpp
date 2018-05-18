#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool IsNumeric(char *num)
{
	bool flag;
	for(;*num!='\0';num++)
	{
		if(*num>='0'&&*num<='9')
			flag=true;
		else
		{
			flag=false;
			break;
		}
	}
	return flag;
}


bool IsNumeric(string num)
{
	bool flag = 1;
	int i = 0;
	string::iterator itr;
	for (itr = num.begin();itr < num.end();itr++,i++ ){
		if(*itr>='0'&&*itr<='9' && i < 6 ){
			flag=true;
		}	
		else
		{
			flag=false;
			break;
		}
	}

	return flag;
}



int main(){
	
	int n,m,q,r,i=1;
	string str;
	
	while (1){
		cout <<"Input a integer(1-9999) or 'q' to exit:"<< endl;		
		while(1){
			cin >> str;
			if (str == "q"|| str =="quit") exit(0);
			if (IsNumeric(str))
				n = atoi(str.c_str());
			else{
				cout << "Error! Please repeat input a integer(1-9999) or 'q' to exit:"<< endl;
				continue;
			}		
			if( n>0 && n<10000 ) break;
			cout << "Error! Please repeat input a integer(1-9999) or 'q' to exit:"<< endl;
		}
		
		if(n>=1000)     m=4;
		else if(n>=100) m=3;
		else if(n>=10)  m=2;
		else            m=1;
	
		cout <<"-------"<< endl;
		cout <<"   "<< m << endl;
		cout <<"-------"<< endl;
		
		switch(m){
			case 4:
				cout<<"   "<< n/1000 <<endl;
				r = n%1000;
				cout<<"   "<< r/100 <<endl;
				r = n%100;
				cout<<"   "<< r/10 <<endl;
				cout<<"   "<< r%10 <<endl;
				break;
			case 3:
				cout<<"   "<< n/100 <<endl;
				r = n%100;
				cout<<"   "<< r/10 <<endl;
				cout<<"   "<< r%10 <<endl;
				break;
			case 2:
				cout<<"   "<< n/10 <<endl;
				cout<<"   "<< n%10 <<endl;	
				break;
			default:
				cout<<"   "<< n <<endl;				
		}
		cout <<"-------"<< endl;
	}

	return 0;
}