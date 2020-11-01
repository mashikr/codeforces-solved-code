#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,x=0,y,v1,v2,v3,v4,p,r;
    v1=v2=v3=v4=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>y;
        if(y==1)v1++;
        else if(y==2)v2++;
        else if(y==3)v3++;
        else v4++;
    }
    //cout<<v1<<" "<<v2<<" "<< v3 <<" "<<v4<<endl;
    p = v3>v1?v1:v3;
    //cout<<"p "<<p<<endl;
    x=v4+(v2/2)+p;
    //cout<<"x "<<x<<endl;
    v3=v3-p;
    v1=v1-p;
    //cout<<v3<< " v3 v1 "<<v1<<endl;
    x=x+v3;
    double q=(v2%2)+v1;
    //cout<<q<<" q v1 x "<<v1<< " "<<x<<endl;
    x=x+ceil(q/4);

    cout<<x<<endl;
    return 0;
}
