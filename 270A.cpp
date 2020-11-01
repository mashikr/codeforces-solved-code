#include<iostream>
using namespace std;

int main()
{
    int n,i,deg,x;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>deg;
        x = 180 - deg;
        if(360%x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
