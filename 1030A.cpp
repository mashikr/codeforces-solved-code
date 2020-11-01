#include<iostream>
using namespace std;

int main()
{
    int n,i,x,lev=0;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>x;
        if(x==1) {lev++;}
    }

    if(lev>0){ cout<<"HARD"<<endl; }
    else{ cout<<"EASY"<<endl; }

    return 0;
}
