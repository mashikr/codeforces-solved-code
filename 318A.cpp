#include<iostream>
using namespace std;

int main()
{
    long long int a,p,hf;
    cin>>a>>p;

    if(a%2==0) hf=a/2;
    else hf=a/2+1;

    if(p<=hf) cout<<2*p-1<<endl;
    else cout<<2*(p-hf)<<endl;

    return 0;
}

