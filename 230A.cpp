#include<iostream>

using namespace std;

int main()
{
    long long int p,n,i,x,y,temp=1;
    cin>>p>>n;
    for(i=0; i<n; i++){
        cin>>x>>y;
        if(p>=x) p+=y;
        else temp=0;

    }
    if(temp==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}


