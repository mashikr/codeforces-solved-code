#include<iostream>
using namespace std;

int main()
{
    int n,i,val,len=0,total=0,m=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>val;
        if(val>=m){
            len++;
            m=val;
        }
        else{
            len=1;
            m=val;
        }
        if(len>total)
            total=len;
    }
    cout<<total<<endl;
}
