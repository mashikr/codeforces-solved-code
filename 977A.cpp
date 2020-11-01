#include<iostream>

using namespace std;

int main()
{
    int a,n,i;

    cin>>a>>n;
    for(i=0; i<n; i++){
        if(a%10!=0) a--;
        else a=a/10;
    }
    cout<<a<<endl;

    return 0;
}



