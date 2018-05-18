#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year ,month;
	cin>>year>>month;
	bool r=false;
	if(year%4==0)
	{
		r=true;
		if(year==1900){
		cout<<"28";
		return 0;
	}
	}
	else{
		r=false;
	}
	switch (month)
	{
		case 1:case 3:case 5: case 7: case 8:case 10 :
		case 12: cout<<"31";break;
		case 4:case 6:case 9: case 11:  cout<<"30";break;	
		case 2:
			if(r!=true)
				cout<<"28";
			else 
				cout<<"29";	
			break;
			
	}
	return 0;
}
