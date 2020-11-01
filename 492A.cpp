#include<iostream>
using namespace std;

int main()
{
    int n,x=1,i=1,lev=0;
    cin>>n;

    while(n>=x){
        n -= x;
        i++;
        x += i;
        lev++;
    }

    cout<<lev<<endl;

    return 0;
}
