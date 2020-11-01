#include<iostream>
using namespace std;

int main()
{
    int n,x,y,z;
    cin>>n;

    if(n>0){ cout<<n<<endl;}
    else{
        x = n/10;
        y = -n%10;
        z = (x/10)*10-y;
        x>z ? y=x : y=z ;
        cout<<y<<endl;
    }


    return 0;
}
