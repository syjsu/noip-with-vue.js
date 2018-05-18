#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int prime(int x,int y){
	int t,r,s;
	t=x;
	r=y;
	while (t%r!=0){
		s=r;
		r=t%r;
		t=s;
    }
    return r;
}

int main(){
	int n,i,j,k,num,p,q,num1,num2,bo,w;
	string s[501];
//  freopen("1098.in","r",stdin);
//	freopen("1098.out","w",stdout);
	cin>>n;
	i=0;
	while (i!=n){
		cin>>s[i];
		num=0;
		num1=0;
		p=0;
		q=1;
		bo=1;
		for (j=0;j<s[i].length();j++){
			//cout<<":"<<s[i][j]<<endl;
			k=s[i][j];
			//cout<<"k:"<<k-48<<endl;
			if (48<=k && k<=57) {num=num*10+k-48; //cout<<"number:"<<num<<endl;
			}
			else {
				num1=num;
				num=0;
					switch(bo){
						case 1:
							{p+=num1*q;break;}
						case 2:
							{p-=num1*q;break;}
						case 3:
							{p*=num1;break;}
						case 4:
							{q*=num1;break;}
					}
				    switch(k){
					    case 43:
						    {bo=1;break;}
					    case 45:
					        {bo=2;break;}
					    case 42:
					    	{bo=3;break;}
					    case 47:
					    	{bo=4;break;}
				     	default : break;
				    }
				    
			}
			//cout<<"        pq:"<<p<<"/"<<q<<endl;
		}
		w=prime(p,q);
		p/=w;
		q/=w;
		if (p==0) cout<<0;
		//else if (q==1) cout<<p;
		else if (q<0) cout<<-p<<"/"<<-q;
		else	cout<<p<<"/"<<q<<endl;
		
		
		i++;
	}
	return 0;
//	fclose(stdin);
//	fclose(stdout);
}
