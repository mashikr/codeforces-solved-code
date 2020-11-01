#include<iostream>
using namespace std;

int main()
{
    long long int n,cont=0,x=0;
    cin>>n;

    x = n/100;
    n = n%100;
    cont += x;

    x = n/20;
    n = n%20;
    cont += x;

    x = n/10;
    n = n%10;
    cont += x;

    x = n/5;
    n = n%5;
    cont += x;

    x = n/1;
    n = n%1;
    cont += x;

    cout<<cont<<endl;

    return 0;
}
