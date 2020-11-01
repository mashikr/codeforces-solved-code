#include<iostream>
using namespace std;

int main()
{
    int n,time,extime,x,i,j;
    cin>>n>>time;

    extime = 240 - time;
    x = n;

    for(i=1,j=5; i<=n; i++,j+=5){
        extime -= j;
        if(extime<0){
            x = i-1;
            break;
        }
    }


    cout<<x<<endl;

    return 0;
}
