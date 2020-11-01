#include<iostream>
using namespace std;

int main()
{
    long long int n,a;

    cin>>n;
    while(n>0)
    {
        cin>>a;
        cout<<(a-1)/2<<endl;
        n--;
    }

    return 0;
}
