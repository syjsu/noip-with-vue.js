#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;
int n,v[5005],f[5005];
int main()
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>v[i];
        f[i]=1;
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            if(v[j]<v[i]){
                f[i]=max(f[i],f[j]+1);
            }
        }
    }
    
    int ma=-1;
    for(i=1;i<=n;i++){
        if(ma<f[i]){
            ma=f[i];
        }
         
    }
    
    cout<<ma<<endl;
    
system("pause");
    return 0;
}
