#include<iostream>//½»Á÷Èº£º366577294 
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int x,y,n;
	cin>>y>>x>>n;
	char a[y][x+1];
	int b[y][x],ji[y][x];
	
	for(int i=0;i<y;i++) cin>>a[i];

	memset(ji,0,sizeof(ji));
	memset(b,0,sizeof(b));
	
	for(int i=0;i<y;i++)
	   for(int j=0;j<x;j++) {
	   		switch(a[i][j])      //ASCII
	   		{
	   			case 82:  b[i][j]=1;   //1==R   2==S   3==P
	   			break;
	   			case 83:  b[i][j]=2;
	   			break;
	   			case 80:  b[i][j]=3;
	   			break;
	   		}
	   		
	   } 

	for(int time=1;time<=n;time++){      
		for(int i=0;i<y;i++)
	      for(int j=0;j<x;j++){
	      	  	int s=b[i][j]+1;
	      	  	if(s==4) s=1;
	      	  	if(i-1>=0 &&ji[i-1][j]==0&& s==b[i-1][j] ) ji[i-1][j]=1;
	      		if(i+1< y &&ji[i+1][j]==0&& s==b[i+1][j] ) ji[i+1][j]=1;
	      		if(j-1>=0 &&ji[i][j-1]==0&& s==b[i][j-1] ) ji[i][j-1]=1;     //hogu
	      		if(j+1< x &&ji[i][j+1]==0&& s==b[i][j+1] ) ji[i][j+1]=1;
	      	  
	      		
	      }
	
	    for(int i=0;i<y;i++)
	      for(int j=0;j<x;j++){
	      	  if(ji[i][j]==1){
	      			b[i][j]--;
	      			if(b[i][j]==0)  b[i][j]=3;
						
	      	  }
	      }
	    
	    memset(ji,0,sizeof(ji));
	}

	for(int i=0;i<y;i++)
	   for(int j=0;j<x;j++) {
	   		switch(b[i][j])      //ASCII
	   		{
	   			case 1:  a[i][j]='R';   //1==R   2==S   3==P
	   			break;
	   			case 2:  a[i][j]='S';
	   			break;
	   			case 3:  a[i][j]='P';
	   			break;
	   		}
	   		
	   }  
	for(int i=0;i<y;i++) cout<<a[i]<<endl;
	return 0;
}
