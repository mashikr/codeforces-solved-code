#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,d,x,y,big;
    cin>>a>>b>>c>>d;

    a > b ? x = a : x = b;
    c > d ? y = c : y = d;
    x > y ? big = x : big = y;

    if(big>a) cout<<big-a<<" ";
    if(big>b) cout<<big-b<<" ";
    if(big>c) cout<<big-c<<" ";
    if(big>d) cout<<big-d;

    return 0;
}

