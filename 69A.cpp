#include<iostream>
using namespace std;

int main()
{
    int n,x,y,z,i,j,val;
    x=y=z=0;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            cin>>val;
            if(j==0) x+=val;
            else if(j==1) y+=val;
            else z+=val;
        }
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
