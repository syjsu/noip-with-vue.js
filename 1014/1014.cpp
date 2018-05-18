#include<cstdio> 
#include<cstdlib> 
#include<iostream> 
using namespace std;
int main()
{
	int score;
	cin>>score;
	if(score>=0&&100>=score)
	  {
	  	  if(score>=90)   cout<<"Excellent"<<endl;
	  	  else            {
			                if(score>=80)   cout<<"Good"<<endl;
			                else            {
							                    if(score>=60)    cout<<"Pass"<<endl;   
							                    else             cout<<"Fail"<<endl; 
											} 
					     }
	  }
	system("pause");
	return 0;
}
