#include<iostream>
using namespace std;

int main()
{
    int a,b,x=0,y,res=0;
    cin>>a>>b;
    while(a>0){
        res += a;
        y = a;
        a = a/b;
        x += y - (a*b);

        if(x>=b){
            //res++;
            a++;
            x -= b;

        }
    }

    cout<<res<<endl;

    return 0;
}
