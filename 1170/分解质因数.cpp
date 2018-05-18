#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int data, i = 2;
    scanf("%d", &data);
    while(data > 1)
    {
        if(data % i == 0)
        {
            cout<<i<<"*";
            data /= i;
        }
        else i++;
    }
    return 0; 
}
