#include<iostream>
using namespace std;

int main()
{
    int a,b,x=0,y=0;
    cin>>a>>b;

    while(a>0){
        x += a;
        y += a%b;
        a /= b;
        if(y>=b) {a++; y -= b;}
    }
    cout<<x<<endl;

    return 0;
}
