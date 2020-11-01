#include<iostream>
using namespace std;

int main()
{
    long long int n,x,cont=0;
    cin>>n;

    while(n>0){
        if(n%10==4 || n%10==7) { cont++; }
        n /= 10;
    }

    if(cont==4 || cont==7) { cout<<"YES"<<endl;}
    else { cout<<"NO"<<endl;}

    return 0;
}
