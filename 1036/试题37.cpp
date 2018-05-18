#include<iostream> 
using namespace std;
int main()
{
   long long n,y;
   cin>>n;
   while(n>0)
   {
   	    y=n%2;
   	    n=n/2;
   	    cout<<"shang:"<<n<<" yu:"<<y<<endl; 
   }
   return 0;
}
