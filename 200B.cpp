#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,i,val;
    double sum=0;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>val;
        sum+=val;
    }
    printf("%.12lf",sum/n);

    return 0;
}


