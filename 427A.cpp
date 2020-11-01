#include<iostream>
using namespace std;

int main()
{
    int n,i,in,pos=0,neg=0,count=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>in;
        if(in>0){ pos += in; }
        if (in<0){
            if(pos == 0){ count++; }
            else pos += in;
        }
    }
    cout<<count<<endl;

    return 0;
}
