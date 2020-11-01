#include<iostream>
using namespace std;

int main()
{
    long long int a,sum=0,i;
    cin>>a;

    if(a%2==0) sum=a/2;
    else sum=-((a+1)/2);

    cout<<sum<<endl;
}

