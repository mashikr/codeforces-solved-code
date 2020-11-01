#include<iostream>

using namespace std;

int main()
{
    long long int n,m,i,val,cont=0,temp;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>val;
        if(i==0) cont+=val-1;
        else if(val>=temp) cont+=val-temp;
        else cont+=(n-temp)+val;
        temp=val;
    }
    cout<<cont<<endl;

    return 0;
}


