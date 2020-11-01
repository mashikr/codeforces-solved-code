#include<iostream>
using namespace std;

int main()
{
    int a,b,c,x,sum=0;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            if(b>c){ x=b; }
            else x=c;
        }
        else{
            x=a;
        }
    }
    else{
        if(a<c){
            if(b>c){ x=c; }
            else x=b;
        }
        else{
            x=a;
        }
    }


    sum += x>a ?  x-a : a-x;
    sum += x>b ?  x-b : b-x;
    sum += x>c ?  x-c : c-x;

    cout<<sum<<endl;

    return 0;
}
